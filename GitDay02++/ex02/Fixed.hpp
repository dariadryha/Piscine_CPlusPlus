#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static const int _number;
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		Fixed operator+(const Fixed& b);
		Fixed operator*(const Fixed& b);
		Fixed operator-(const Fixed& b);
		Fixed operator/(const Fixed& b);
		bool operator==(const Fixed& b);
		bool operator!=(const Fixed& b);
		bool operator<(const Fixed& b);
		bool operator>(const Fixed& b);
		bool operator<=(const Fixed& b);
		bool operator>=(const Fixed& b);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};	

std::ostream& operator <<(std::ostream &os, const Fixed &c);
Fixed& min(Fixed& a,Fixed& b);
const Fixed& min(const Fixed &a, const Fixed &b);
Fixed& max(Fixed& a, Fixed& b);
const Fixed& max(const Fixed &a, const Fixed &b);

#endif
