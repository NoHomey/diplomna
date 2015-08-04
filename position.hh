#ifndef _Position_HH

#define _Position_HH

class Position {

protected:

    int x_;
    int y_;

public:

    Position (const int& x, const int& y);
    Position (const Position& pos);
    void assign (const Position& pos);
    void set (const int& x, const int& y);
    void setX (const int& val);
    void setY (const int& val);
    int getX (void);
    int getY (void);

};

#endif
