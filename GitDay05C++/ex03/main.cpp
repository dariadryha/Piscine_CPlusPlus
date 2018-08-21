#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Form*   rrf;
		Form*	scf;
		Form* 	ppf;
		Bureaucrat a("Denis", 1);
		Intern  someRandomIntern;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << rrf->getTarget() << std::endl;

		scf = someRandomIntern.makeForm("Shrubbery Creation", "Tree");
		
		ppf = someRandomIntern.makeForm("Presidential PARDON", "Pardon");
		std::cout << ppf->getTarget() << std::endl;

		a.signForm(*ppf);

		ppf = someRandomIntern.makeForm("fddfjjdfjkjf", "Pardon");
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
