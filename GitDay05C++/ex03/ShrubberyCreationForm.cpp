#include "ShrubberyCreationForm.hpp"

const int 	ShrubberyCreationForm::_grade_exec = 137;
const int	ShrubberyCreationForm::_grade_sign = 145;

ShrubberyCreationForm::ShrubberyCreationForm() : Form("no target", "ShrubberyCreation", _grade_sign, _grade_exec)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, "ShrubberyCreation", _grade_sign, _grade_exec)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other)
{
	static_cast <void> (other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkForm(executor);

	std::ofstream oFile(this->getTarget() + "_shrubbery.txt");
	if (!oFile.is_open())
	{
		std::cout << "File can'not be open!" << std::endl;
		exit(1);
	}
	oFile <<"		_\\/_ 		"<< std::endl;
	oFile <<"	     /\\ 		"<< std::endl;
	oFile <<"	     /\\ 		"<< std::endl;
	oFile <<"	    /  \\ 		"<< std::endl;
	oFile <<"	    /~~\\o 		"<< std::endl;
	oFile <<" 	  /o   \\ 		"<< std::endl;
	oFile <<"	  /~~*~~~\\ 	"<< std::endl;
	oFile <<"	o/    o \\ 		"<< std::endl;
	oFile <<"	/~~~~~~~~\\~` 	"<< std::endl;
	oFile <<"	/__*_______\\ 	"<< std::endl;
	oFile <<"	     || 		"<< std::endl;
	oFile <<"  	   \\====/ 		"<< std::endl;
	oFile <<" 	    \\__/		"<< std::endl;
	oFile.close();
}
