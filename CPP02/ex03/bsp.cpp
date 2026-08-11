#include "Point.hpp"
#include <cmath>

// Fixed dist2Points(Point const &a, Point const &b)
// {
// 	float dx = a.cx().toFloat() - b.cx().toFloat();
// 	float dy = a.cy().toFloat() - b.cy().toFloat();
// 	Fixed res((float)std::sqrt((dx * dx + dy * dy)));
// 	return res;
// }
//
// Fixed heronsFormula(Fixed const &a, Fixed const &b, Fixed const &c)
// {
// 	Fixed s((a + b + c) / 2);
// 	Fixed A((float)std::sqrt((s.toFloat() * (s.toFloat() - a.toFloat()) * (s.toFloat() - b.toFloat()) * (s.toFloat() - c.toFloat()))));
// 	return A;
// }
//
// Fixed triangleArea(Point const a, Point const b, Point const c)
// {
// 	Fixed ab(dist2Points(a,b));
// 	Fixed bc(dist2Points(b, c));
// 	Fixed ca(dist2Points(c, a));
// 	return heronsFormula(ab, bc, ca);
// }
//
// bool bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed triangle0(triangleArea(a, b, c));
// 	Fixed triangle1(triangleArea(a, b, point));
// 	Fixed triangle2(triangleArea(a, point, c));
// 	Fixed triangle3(triangleArea(point, b, c));
// 	if(triangle1 <= 0 || triangle2 <= 0 || triangle3 <= 0)
// 		return false;
// 	return(triangle0 == triangle1 + triangle2 + triangle3);
// }

Fixed cross_product(Point a, Point b, Point p)
{
	Fixed result((b.cx() - a.cx()) * (p.cy() - a.cy()) - ((b.cy() - a.cy()) * (p.cx() - a.cx())));
	return result;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed ab_cp(cross_product(a, b, point));
	Fixed bc_cp(cross_product(b, c, point));
	Fixed ca_cp(cross_product(c, a, point));
	if(ab_cp == 0 || bc_cp == 0 || ca_cp == 0)
		return false;
	if(ab_cp > 0 && bc_cp > 0 && ca_cp > 0)
		return true;
	if(ab_cp < 0 && bc_cp < 0 && ca_cp < 0)
		return true;
	return false;
}
