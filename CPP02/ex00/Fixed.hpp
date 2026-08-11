#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
class Fixed
{
	private:
		int fixed_point;
		static const int fract_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );;
};
#endif
