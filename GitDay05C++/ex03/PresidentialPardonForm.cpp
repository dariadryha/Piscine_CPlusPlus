#include "PresidentialPardonForm.hpp"

const int 	PresidentialPardonForm::_grade_exec = 5;
const int	PresidentialPardonForm::_grade_sign = 25;

PresidentialPardonForm::PresidentialPardonForm() : Form("no target", "PresidentialPardon", _grade_sign, _grade_exec)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form(target, "PresidentialPardon", PresidentialPardonForm::_grade_sign, PresidentialPardonForm::_grade_exec)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other)
{
	static_cast <void> (other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void  PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkForm(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}