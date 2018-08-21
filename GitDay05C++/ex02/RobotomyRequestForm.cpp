#include "RobotomyRequestForm.hpp"

const int 	RobotomyRequestForm::_grade_exec = 45;
const int	RobotomyRequestForm::_grade_sign = 72;

RobotomyRequestForm::RobotomyRequestForm() : Form("no target", "RobotomyRequest", _grade_sign, _grade_exec)
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form(target, "RobotomyRequest", _grade_sign, _grade_exec)
{
	srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& other)
{
	static_cast <void> (other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() { }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkForm(executor);
	std::cout << this->getTarget() << " Vzuuuuuuuuhhh!" 
	<<  (((rand() % 100) % 2) ? " has been robotomized successfully!" : " robotomization failed!" ) << std::endl;
}
