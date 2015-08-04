#ifndef _CartesianCoordinateSystem_HH

#define _CartesianCoordinateSystem_HH

template <class Type> class CartesianCoordinateSystem {

protected:

	Axis<Type> x_;
	Axis<Type> y_;

public:

    virtual CartesianCoordinateSystem (const int& x, const int& y);
    virtual void setXY (const int& x, const int& y);
    virtual void setX (const int& val);
    virtual void setY (const int& val);
    virtual Axis<Type> getX (void) const;
    virtual Axis<Type> getY (void) const ;

};

#endif

