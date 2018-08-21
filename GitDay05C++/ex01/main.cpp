#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << std::boolalpha;
	try
	{
		Bureaucrat a("Dasha", 140);
		// Bureaucrat c("Dasha", 151);
		std::cout << a << std::endl;
		Bureaucrat b("Denis", 1);
		std::cout << b << std::endl;
		Form f1("Dasha's form", 130, 40);
		std::cout << f1 << std::endl;
		Form f2("Denis's form", 1, 10);
		std::cout << f2 << std::endl;
		a.signForm(f1);
		std::cout << f2.getSign() << std::endl;
		b.signForm(f2);
		std::cout << f2.getSign() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
