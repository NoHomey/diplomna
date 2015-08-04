#ifndef _Direction_HH

#define _Direction_HH

class Direction {

    enum direction {Negative = -1, Null, Positive};

protected:
    
    direction d_;

public:

    Direction (const int& val);
    void assign (const Direction& dir);
    void set (const int& val);
    void change (void);
    void invert (void);
    int toInt (void) const;

};

#endif