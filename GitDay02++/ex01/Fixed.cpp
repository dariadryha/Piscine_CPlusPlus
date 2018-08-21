#include "Fixed.hpp"

const int Fixed::_number = 8;

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << 8;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << _number));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = operator = (other)._value;
}

Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}
 
void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->_value)/(1 << _number));
}

int Fixed::toInt( void ) const
{
	return (this->_value >> 8);
}

std::ostream& operator <<(std::ostream &os, const Fixed &c){
    os << c.toFloat();
    return os;
}

// Fixed& operator++()
// {
// 	++this->_value;
// 	return (*this);
// }

// Fixed operator++(int i)
// {
// 	Fixed temp;
// 	temp.setRawBits(this->value);
// 	operator++();
// 	return (temp);
// }
