#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("Dasha", 0);
		std::cout << a << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Dasha", 151);
		std::cout << a << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Fooo", 140);
		std::cout << a << std::endl;
		for (int i = 0; i < 15; ++i)
		{
			a.lowGrade();
			std::cout << a << std::endl;
		}
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat a("Zaz", 1);
		std::cout << a << std::endl;
		a.highGrade();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
