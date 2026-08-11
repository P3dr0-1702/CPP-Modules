#include "Point.hpp"
#include <iostream>

int main()
{
	Point a;
	Point b;
	Point c;
	Point check;
	float i;
	std::cout << "Point A?\nx?>";
	std::cin >> i;
	a.cx().setRawBits(i);
	std::cout << "Point A?\ny?>";
	std::cin >> i;
	a.cy().setRawBits(i);
	std::cout << "Point B?\nx?>";
	std::cin >> i;
	b.cx().setRawBits(i);
	std::cout << "Point B?\ny?>";
	std::cin >> i;
	b.cy().setRawBits(i);
	std::cout << "Point C?\nx?>";
	std::cin >> i;
	c.cx().setRawBits(i);
	std::cout << "Point C?\ny?>";
	std::cin >> i;
	c.cy().setRawBits(i);
	std::cout << "Point Check?\nx?>";
	std::cin >> i;
	check.cx().setRawBits(i);
	std::cout << "Point Check?\ny?>";
	std::cin >> i;
	check.cy().setRawBits(i);
	bool in = bsp(a,b,c,check);
	if(in)
		std::cout << "Inside\n";
	else
		std::cout << "Outside\n";
	return 0;
}

