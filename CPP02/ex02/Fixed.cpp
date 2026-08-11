#include "Fixed.hpp"
#include <iostream>
#include <math.h>


//Constructors and Destructor
Fixed::Fixed()
{
	this->fixed_point = 0;
}

Fixed::~Fixed()
{
	//Need i even do anything here?
	//std::cout << "DD called" << std::endl;
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
}

//Functions 

int Fixed::toInt() const
{
	return (this->fixed_point >> this->fract_bits);
}

float Fixed::toFloat() const
{
	return (this->fixed_point / pow(2, this->fract_bits));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a < b)
		return a;
	return b;
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a > b)
		return a;
	return b;
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a > b)
		return a;
	return b;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

// Operator Overload

Fixed Fixed::operator+(const Fixed &src) const
{
	Fixed res;
	res.setRawBits(this->fixed_point + src.fixed_point);
	return res;
}


Fixed Fixed::operator-(const Fixed &src) const
{
	Fixed res;
	res.setRawBits(this->fixed_point - src.fixed_point);
	return res;
}

Fixed Fixed::operator/(const Fixed &src) const
{
	Fixed res;
	res.setRawBits((this->fixed_point << fract_bits) / src.fixed_point);
	return res;
}

Fixed Fixed::operator*(const Fixed &src) const
{
	Fixed res;
	res.setRawBits((this->fixed_point * src.fixed_point) >> fract_bits);
	return res;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->fixed_point = src.getRawBits();
	return (*this);
}

Fixed &Fixed::operator++(void)
{
	this->fixed_point++;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	this->fixed_point--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	++this->fixed_point;
	return old;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	--this->fixed_point;
	return old;
}

bool Fixed::operator==(const Fixed &src) const
{
	return(this->fixed_point == src.fixed_point);
}

bool Fixed::operator!=(const Fixed &src) const
{
	return(this->fixed_point != src.fixed_point);
}

bool Fixed::operator<=(const Fixed &src) const
{
	return(this->fixed_point <= src.fixed_point);
}

bool Fixed::operator>=(const Fixed &src) const
{
	return(this->fixed_point >= src.fixed_point);
}

bool Fixed::operator<(const Fixed &src) const
{
	return(this->fixed_point < src.fixed_point);
}

bool Fixed::operator>(const Fixed &src) const
{
	return(this->fixed_point > src.fixed_point);
}

std::ostream &operator<<(std::ostream &out, Fixed const &src)
{
	out << src.toFloat();
	return (out);
}

