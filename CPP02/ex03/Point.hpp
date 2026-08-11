
#include "Fixed.hpp"

#pragma once

#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(float x, float y);
		Point(const Point &copy);
		~Point();

		Point &operator=(const Point);
		Fixed cx(void) const;
		Fixed cy(void) const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif
