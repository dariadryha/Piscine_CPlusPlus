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
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};	

std::ostream& operator <<(std::ostream &os, const Fixed &c);

#endif
