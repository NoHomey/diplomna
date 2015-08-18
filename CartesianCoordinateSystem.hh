#ifndef _CartesianCoordinateSystem_HH

#define _CartesianCoordinateSystem_HH

template <class T> class CartesianCoordinateSystem {

public:

	CartesianCoordinateSystem (void) noexcept = default;
	CartesianCoordinateSystem (const T& x, const T& y) noexcept;
    auto setX (const T& x) noexcept -> void;
    auto setY (const T& y) noexcept -> void;
    auto setXY (const T& x, const T& y) noexcept -> void;
    auto getX (void) const noexcept -> T;
    auto getY (void) const noexcept -> T;

protected:

	T x_ {};
	T y_ {};

};

template <class T> CartesianCoordinateSystem<T>::CartesianCoordinateSystem (const T& x, const T& y) noexcept
: x_ {x}, y_ {y} {}

template <class T> auto CartesianCoordinateSystem<T>::setX (const T& x) noexcept -> void {
	x_ = x;
}

template <class T> auto CartesianCoordinateSystem<T>::setY (const T& y) noexcept -> void {
	y_ = y;
}

template <class T> auto CartesianCoordinateSystem<T>::setXY(const T& x, const T& y) noexcept -> void {
	setX(x);
	setY(y);
}

template <class T> auto CartesianCoordinateSystem<T>::getX (void) const noexcept -> T {
	return x_;
}

template <class T> auto CartesianCoordinateSystem<T>::getY (void) const noexcept -> T {
	return y_;
}

#endif