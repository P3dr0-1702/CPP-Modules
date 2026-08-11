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
		Fixed operator+(const Fixed &scr) const;
		Fixed operator-(const Fixed &scr) const;
		Fixed operator*(const Fixed &scr) const;
		Fixed operator/(const Fixed &scr) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		bool operator>(const Fixed &scr) const;
		bool operator<(const Fixed &scr) const;
		bool operator>=(const Fixed &scr) const;
		bool operator<=(const Fixed &scr) const;
		bool operator==(const Fixed &scr) const;
		bool operator!=(const Fixed &scr) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );;
		int toInt() const;
		float toFloat() const;


		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed const &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &src);
