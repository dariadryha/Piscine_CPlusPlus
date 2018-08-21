#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("Dasha", 10);
		PresidentialPardonForm b("Toto");
		a.executeForm(b);
		a.signForm(b);
		std::cout << b << std::endl;
		a.executeForm(b);
		Bureaucrat c("Denis", 5);
		c.executeForm(b);
		
		std::cout << std:: endl;
		RobotomyRequestForm v("Zaz");
		c.executeForm(v);
		c.signForm(v);
		std::cout << v << std::endl;
		c.executeForm(v);
		Bureaucrat j("Tor", 150);
		j.executeForm(v);
		std::cout << std:: endl;
		ShrubberyCreationForm d("NewForm");
		std::cout << d << std::endl;
		c.executeForm(d);
		c.signForm(d);
		c.executeForm(d);
		j.executeForm(d);
		ShrubberyCreationForm z("ASCII tree");
		c.signForm(z);
		c.executeForm(z);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
