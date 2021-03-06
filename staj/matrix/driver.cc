#include "driver.hh"

Adafruit_TLC5947::Adafruit_TLC5947(const uint8_t& n, const uint8_t& c, const uint8_t& d, const uint8_t& l, const uint8_t& b)
: num(n), _clk(c), _dat(d), _lat(l), _blk(b), flag_(1) {
  pwmbuffer = (uint16_t *)calloc(24*n, sizeof(uint16_t));
}

Adafruit_TLC5947::~Adafruit_TLC5947(void) {
  free(pwmbuffer);
}

void Adafruit_TLC5947::write(void) {
  if(flag_) {
    digitalWrite(_blk, LOW);
    flag_ = 0;
  }
  digitalWrite(_lat, LOW);
  for (int16_t c = 24*num - 1;c >= 0;--c) {
    for (int8_t b=11; b>=0; b--) {
      digitalWrite(_clk, LOW);
      (pwmbuffer[c] & (1 << b)) ? digitalWrite(_dat, HIGH) : digitalWrite(_dat, LOW);
      digitalWrite(_clk, HIGH);
    }
  }
  digitalWrite(_clk, LOW);
  digitalWrite(_lat, HIGH);  
  digitalWrite(_lat, LOW);
}

void Adafruit_TLC5947::setPWM(const uint16_t& chan, const uint16_t& pwm) {
  uint16_t val;
  val = pwm > 4095 ? 4095 : pwm;
  if (chan > 24*num) return;
  pwmbuffer[chan] = val;  
}

void Adafruit_TLC5947::setLED(const uint8_t& lednum, const uint16_t& b, const uint16_t& r, const uint16_t& g) {
  setPWM(lednum*3, b);
  setPWM(lednum*3+1, r);
  setPWM(lednum*3+2, g);
}

void Adafruit_TLC5947::unsetLED(const uint8_t& lednum) {
  setLED(lednum, 0, 0, 0);
}

void Adafruit_TLC5947::setup(void) {
  pinMode(_dat, OUTPUT);
  pinMode(_clk, OUTPUT);
  pinMode(_lat, OUTPUT);
  pinMode(_blk, OUTPUT);
  reset();
}

void Adafruit_TLC5947::reset() {
  digitalWrite(_blk, HIGH);
  flag_ = 1;
}


void Adafruit_TLC5947::setALL(const uint16_t& b, const uint16_t& r, const uint16_t& g) {
 for (int16_t i = 24*num - 1;i >= 0;--i)
   setLED(i, b, r, g);
}

