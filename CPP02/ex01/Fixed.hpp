#include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int fract_bits = 8;
	public:
		Fixed();
		Fixed(int a);
		Fixed(float a);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);
		int getRawBits( void ) const;
		void setRawBits( int const raw );;
		int toInt() const;
		float toFloat() const;

};
std::ostream &operator<<(std::ostream &out, const Fixed &src);
