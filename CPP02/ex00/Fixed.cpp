#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	this->fixed_point = 0;
}

Fixed::~Fixed()
{
	//Need i even do anything here?
	//std::cout << "DD called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	if(this != &src)
		this->fixed_point = src.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}


int Fixed::getRawBits(void) const
{

	return this->fixed_point;
}
