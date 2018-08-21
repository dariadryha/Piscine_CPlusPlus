#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
		virtual void execute(Bureaucrat const & executor) const;
	private:
		static const int 	_grade_exec;
		static const int	_grade_sign;
};


# endif
