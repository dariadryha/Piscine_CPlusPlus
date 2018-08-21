#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern& other);
		Intern& operator = (const Intern& other);
		~Intern();
		RobotomyRequestForm* createRobotomyRequestForm(std::string str2);
		ShrubberyCreationForm* createShrubberyCreationForm(std::string str2);
		PresidentialPardonForm* createPresidentialPardonForm(std::string str2);
		Form* makeForm(std::string str1, std::string str2);
		class UnknowForm : public std::exception
		{
			public:
				UnknowForm();
				UnknowForm(const UnknowForm& other);
				UnknowForm& operator = (const UnknowForm& other);
				virtual ~UnknowForm() throw();
				virtual const char * what() const throw();
		};
};

#endif
