#include "Intern.hpp"

Intern::Intern() { }

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern& Intern::operator = (const Intern& other)
{
	static_cast <void> (other);
	return *this;
}

Intern::~Intern() {}

RobotomyRequestForm* Intern::createRobotomyRequestForm(std::string str2)
{
	return new RobotomyRequestForm(str2);
}

ShrubberyCreationForm* Intern::createShrubberyCreationForm(std::string str2)
{
	return new ShrubberyCreationForm(str2);
}

PresidentialPardonForm* Intern::createPresidentialPardonForm(std::string str2)
{
	return new PresidentialPardonForm(str2);
}

Form* Intern::makeForm(std::string str1, std::string str2)
{
	size_t pos;
	std::string kind[] = {"robotomy request", "shrubbery creation", "presidential pardon"};

	for (int i = 0; i < (int)str1.length(); i++)
		str1[i] = (char)tolower(str1[i]);

	for (int i = 0; i < 3; i++)
	{
		if ((pos = str1.find(kind[i])) != std::string::npos)
		{
			std::cout << "Intern creates " << kind[i] << " form!" << std::endl;
			if (i == 0)
				return createRobotomyRequestForm(str2);
			else if (i == 1)
				return createShrubberyCreationForm(str2);
			else if (i == 2)
				return createPresidentialPardonForm(str2);
		}
	}
	throw(UnknowForm());
}

Intern::UnknowForm::UnknowForm() { }
Intern::UnknowForm::UnknowForm(const UnknowForm& other) { *this = other; }
Intern::UnknowForm& Intern::UnknowForm::operator = (const UnknowForm& other)
{
	static_cast <void> (other);
	return *this;
}

Intern::UnknowForm::~UnknowForm() throw() {}

const char * Intern::UnknowForm::what() const throw()
{
	return "Unknow Form!";
}
