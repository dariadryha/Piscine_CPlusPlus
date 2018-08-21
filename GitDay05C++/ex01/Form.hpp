#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <stdexcept> 
#include "Bureaucrat.hpp" 

class Form
{
	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(const Form& other);
		Form& operator = (const Form& other);
		~Form();
		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(Bureaucrat& rhs);
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
				GradeTooHighException(const GradeTooHighException& other);
				GradeTooHighException& operator = (const GradeTooHighException& other);
				virtual ~GradeTooHighException() throw();
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException();
				GradeTooLowException(const GradeTooLowException& other);
				GradeTooLowException& operator = (const GradeTooLowException& other);
				virtual ~GradeTooLowException() throw();
				virtual const char * what() const throw();
		};
	private:
		const std::string _name;
		bool _sign;
		const int _grade_sign;
		const int _grade_exec;
};

std::ostream& operator <<(std::ostream &os, const Form& c);

# endif
