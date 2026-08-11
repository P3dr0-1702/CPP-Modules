#include "Point.hpp"

Point::Point()
	: x(0) , y(0)
{
}

Point::Point(float x, float y)
	: x(x), y(y)
{
}

Point::~Point()
{

}

Point::Point(const Point &copy)
	: x(copy.x), y(copy.y)
{
}

const Fixed &Point::cx() const

{
	return this->x;
}

const Fixed &Point::cy() const
{
	return this->y;
}
