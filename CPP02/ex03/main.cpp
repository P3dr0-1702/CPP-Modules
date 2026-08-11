#include "Point.hpp"
#include <iostream>

int main()
{
	float x;
	float y;
	std::cout << "Point A?\nx?>";
	std::cin >> x;
	std::cout << "Point A?\ny?>";
	std::cin >> y;
	Point a(x, y);
	std::cout << "Point B?\nx?>";
	std::cin >> x;
	std::cout << "Point B?\ny?>";
	std::cin >> y;
	Point b(x, y);
	std::cout << "Point C?\nx?>";
	std::cin >> x;
	std::cout << "Point C?\ny?>";
	std::cin >> y;
	Point c(x, y);
	std::cout << "Point Check?\nx?>";
	std::cin >> x;
	std::cout << "Point Check?\ny?>";
	std::cin >> y;
	Point check(x, y);
	bool in = bsp(a,b,c,check);
	if(in)
		std::cout << "Inside\n";
	else
		std::cout << "Outside\n";
	return 0;
}

