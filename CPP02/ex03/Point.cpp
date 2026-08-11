#include "Point.hpp"

Point::Point()
{

}

Point::~Point()
{

}

Point::Point(const Point &copy)
{
	this->cx() = copy.cx();
	this->cy() = copy.cy();
}

Fixed Point::cx() const
{
	return this->x;
}

Fixed Point::cy() const
{
	return this->y;
}
