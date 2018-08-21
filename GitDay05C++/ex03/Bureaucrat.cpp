#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("no name")
{
	this->_grade = 1;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() { }
Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException& other)
{
	*this = other;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator = (const GradeTooLowException& other)
{
	static_cast <void> (other);
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{

}

Bureaucrat::GradeTooHighException::GradeTooHighException() { }
Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException& other)
{
	*this = other;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator = (const GradeTooHighException& other)
{
	static_cast <void> (other);
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw(GradeTooLowException());
	if (grade < 1)
		throw(GradeTooHighException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other)
{
	if (this != &other)
		this->_grade = other._grade;
	return *this;
}

void Bureaucrat::lowGrade()
{
	if (this->_grade >= 150)
		throw(GradeTooLowException());
	this->_grade++;
}

void Bureaucrat::highGrade()
{
	if (this->_grade <= 1)
		throw(GradeTooHighException());
	this->_grade--;
}

int Bureaucrat::getGrade() const { return this->_grade; }
std::string Bureaucrat::getName() const {return this->_name; }

Bureaucrat::~Bureaucrat() {}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too high!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low!";
}

std::ostream& operator <<(std::ostream &os, const Bureaucrat& c)
{
	os << c.getName() << ", bureaucrat grade " << c.getGrade();
	return os;
}

void Bureaucrat::signForm(Form &rhs)
{
	try
	{
		rhs.beSigned(*this);
		std::cout << this->getName() << " signs " << rhs.getName() << "!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " cannot sign " << rhs.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << "!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

