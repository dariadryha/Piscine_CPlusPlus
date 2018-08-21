#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed c(-1);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << max( a, b ) << std::endl;
	std::cout << Fixed( 5.05f ) + Fixed( 2 )  << std::endl;
	std::cout << Fixed( 5.05f ) - Fixed( 2 )  << std::endl;
	std::cout << Fixed( 5) - Fixed( 2 )  << std::endl;
	std::cout << Fixed(6) / Fixed( 2 )  << std::endl;
	std::cout << Fixed(9.9f) - Fixed( 3 )  << std::endl;
	std::cout << std::boolalpha;
	std::cout << (Fixed(9.9f) < Fixed( 3 ))  << std::endl;
	std::cout << (Fixed(9.9f) > Fixed( 3 ))  << std::endl;
	std::cout << (Fixed(9.9f) >= Fixed( 3 ))  << std::endl;
	std::cout << (Fixed(9.9f) >= Fixed( 9.9f ))  << std::endl;
	std::cout << (Fixed(9.9f) > Fixed( 9.9f ))  << std::endl;
	std::cout << (Fixed(3.9f) <= Fixed( 3 ))  << std::endl;
	std::cout << (Fixed(9.9f) <= Fixed( 9.9f ))  << std::endl;
	std::cout << (Fixed(9.9f) < Fixed( 9.9f ))  << std::endl;
	std::cout << (Fixed(9.9f) == Fixed( 9.9f ))  << std::endl;
	std::cout << (Fixed(9.9f) == Fixed( 9.8f ))  << std::endl;
	std::cout << (Fixed(9.9f) != Fixed( 9.9f ))  << std::endl;
	std::cout << (Fixed(9.9f) != Fixed( 9.8f ))  << std::endl;
	std::cout << (a != b)  << std::endl;

	Fixed d;

	d = min(a, c);
	std::cout << d << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << max(a, c) << std::endl;
	std::cout << max(a, b) << std::endl;
	return 0;
}
