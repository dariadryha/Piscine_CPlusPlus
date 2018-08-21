#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat& operator = (const Bureaucrat& other);
		~Bureaucrat();
		void lowGrade();
		void highGrade();
		std::string getName() const;
		int getGrade() const;
		void signForm(Form &rhs);
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				GradeTooLowException(const GradeTooLowException& other);
				GradeTooLowException& operator = (const GradeTooLowException& other);
				virtual ~GradeTooLowException() throw();
				virtual const char * what() const throw();

		};
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(const GradeTooHighException& other);
				GradeTooHighException& operator = (const GradeTooHighException& other);
				virtual ~GradeTooHighException() throw();
				virtual const char * what() const throw();
		};
	private:
		const std::string _name;
		int _grade;
};

std::ostream& operator <<(std::ostream &os, const Bureaucrat &c);

#endif
