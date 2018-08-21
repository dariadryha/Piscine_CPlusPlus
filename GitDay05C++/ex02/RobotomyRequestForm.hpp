#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm& operator = (const RobotomyRequestForm& other);
		~RobotomyRequestForm();
		virtual void execute(Bureaucrat const & executor) const;
	private:
		static const int 	_grade_exec;
		static const int	_grade_sign;
};


# endif
