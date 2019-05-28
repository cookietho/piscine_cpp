#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Default", 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) {
	*this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator =(ShrubberyCreationForm const & copy) {
	if (this != &copy)
		return *this;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string name = this->getName() + "_shrubbery";
	const char *fileName = name.c_str();
	if (executor.getGrade() <= 137 && this->getSigned() == true)
	{
		std::ofstream ofs(fileName);
		if (ofs)
		{
			ofs << "    O    " << std::endl << "   OOO   " << std::endl << "  OOOOO  " << std::endl << " OOOOOOO " << std::endl << "OOOOOOOOO" << std::endl << "    |    " << std::endl << " XXXXXXX " << std::endl;
		}
		ofs.close();
	}
	else if (this->getSigned() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
