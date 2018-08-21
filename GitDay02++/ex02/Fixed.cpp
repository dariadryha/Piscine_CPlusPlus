#include "Fixed.hpp"

const int Fixed::_number = 8;

Fixed::Fixed()
{
	this->_value = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = value << 8;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << _number));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_value = operator = (other)._value;
}

Fixed& Fixed::operator = (const Fixed& other)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
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

Fixed Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	const Fixed old(*this);
	++(*this);
	return (old);
}

Fixed Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	const Fixed old(*this);
	--(*this);
	return (old);
}

Fixed Fixed::operator+(const Fixed& b)
{
	// std::cout << "\nAddition called!\n" << std::endl;
	return (toFloat() + b.toFloat());
}

Fixed Fixed::operator*(const Fixed& b)
{
	// std::cout << "\nMultiplication called!\n" << std::endl;
	return (toFloat() * b.toFloat());
}

Fixed Fixed::operator-(const Fixed& b)
{
	// std::cout << "\nSubtraction called!\n" << std::endl;
	return (toFloat() - b.toFloat());
}

Fixed Fixed::operator/(const Fixed& b)
{
	// std::cout << "\nDivision called!\n" << std::endl;
	return (toFloat() / b.toFloat());
}

bool Fixed::operator<(const Fixed& b)
{
	return (toFloat() < b.toFloat() ? 1 : 0);
}

bool Fixed::operator>(const Fixed& b)
{
	return (toFloat() > b.toFloat() ? 1 : 0);
}

bool Fixed::operator<=(const Fixed& b)
{
	return (toFloat() <= b.toFloat() ? 1 : 0);
}

bool Fixed::operator>=(const Fixed& b)
{
	return (toFloat() >= b.toFloat() ? 1 : 0);
}

bool Fixed::operator==(const Fixed& b)
{
	return (toFloat() == b.toFloat() ? 1 : 0);
}

bool Fixed::operator!=(const Fixed& b)
{
	return (toFloat() != b.toFloat() ? 1 : 0);
}

const Fixed& min(const Fixed &a, const Fixed &b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed& min(Fixed& a, Fixed& b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

const Fixed& max(const Fixed &a, const Fixed &b)
{
	return (a.toFloat() > b.toFloat() ? a : b);
}

Fixed& max(Fixed& a, Fixed& b)
{
	return (a.toFloat() > b.toFloat() ? a : b);
}
