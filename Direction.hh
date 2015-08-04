#ifndef _Direction_HH

#define _Direction_HH

class Direction {

    enum direction {Negative = -1, Null, Positive};

protected:
    
    direction d_;

public:

    Direction (const int& val);
    void set (const int& val);
    int get (void) const;
    void invert (void);
    int toInt (void) const;

};

#endif