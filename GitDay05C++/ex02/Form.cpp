#include "Form.hpp"

Form::Form() : _target("no target"), _name("no name"), _grade_sign(1), _grade_exec(1)
{
	this->_sign = false;
}

Form::Form(std::string target, std::string name, int grade_sign, int grade_exec) : _target(target), _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	this->_sign = false;
	if (this->_grade_sign < 1 || this->_grade_exec < 1)
		throw(GradeTooHighException());
	if (this->_grade_sign > 150 || this->_grade_exec > 150)
		throw(GradeTooLowException());
}

Form::Form(const Form& other) : _grade_sign(other._grade_sign), _grade_exec(other._grade_exec)
{
	this->_sign = other._sign;
	this->_target = other._target;
}

Form& Form::operator = (const Form& other)
{
	if (this != &other)
	{
		this->_sign = other._sign;
		this->_target = other._target;
	}
	return *this;
}

std::string Form::getName() const { return this->_name; }
bool Form::getSign() const { return this->_sign; }
int Form::getGradeSign() const { return this->_grade_sign; }
int Form::getGradeExec() const { return this->_grade_exec; }
std::string Form::getTarget() const { return this->_target; }

Form::GradeTooLowException::GradeTooLowException() { }
Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException& other)
{
	*this = other;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator = (const GradeTooLowException& other)
{
	static_cast <void> (other);
	return *this;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

Form::GradeTooHighException::GradeTooHighException() { }
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException& other)
{
	*this = other;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator = (const GradeTooHighException& other)
{
	static_cast <void> (other);
	return *this;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{

}
const char * Form::GradeTooHighException::what() const throw()
{
	return "the grade is too high!";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "the grade is too low!";
}


std::ostream& operator <<(std::ostream &os, const Form& c)
{
	os << c.getName() << " form is" << (c.getSign() ? " signed " : " not signed ") << "with grade to sign " << c.getGradeSign() << " and grade to execute " << c.getGradeExec() << "!";
	return os;
}

void Form::beSigned(Bureaucrat& rhs)
{
	if (rhs.getGrade() > this->_grade_sign)
		throw(GradeTooLowException());
	this->_sign = true;
}

Form::~Form() { }

void Form::checkForm(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw(NoSignedForm());
	if (executor.getGrade() > this->getGradeExec())
		throw(GradeTooLowException());
}

Form::NoSignedForm::NoSignedForm() {}
Form::NoSignedForm::NoSignedForm(const NoSignedForm& other) {*this = other;}
Form::NoSignedForm& Form::NoSignedForm::operator = (const NoSignedForm& other)
{
	static_cast <void> (other);
	return *this;
}
Form::NoSignedForm::~NoSignedForm() throw() {}
const char * Form::NoSignedForm::what() const throw()
{
	return "The form is not signed!";
}