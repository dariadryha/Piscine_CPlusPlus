#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator = (const PresidentialPardonForm& other);
		~PresidentialPardonForm();
		virtual void execute(Bureaucrat const & executor) const;
	private:
		static const int 	_grade_exec;
		static const int	_grade_sign;
};


# endif
