#include "Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "DC called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "DD called" << std::endl;
}

Fixed::Fixed(int const nbr)
{
	this->fixed_point = nbr << this->fract_bits;
}

Fixed::Fixed(float const nbr)
{
	this->fixed_point = roundf(nbr * (pow(2, this->fract_bits)));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "CC called" << std::endl;
}

int Fixed::toInt() const
{
	return (this->fixed_point >> this->fract_bits);
}

float Fixed::toFloat() const
{
	return (this->fixed_point / pow(2, this->fract_bits));
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "CA called" << std::endl;
	if (this != &src)
		this->fixed_point = src.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

std::ostream &operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();
	return (out);
}
