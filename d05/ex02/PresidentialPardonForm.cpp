#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default", 25, 5) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator =(PresidentialPardonForm const & copy) {
	if (this != &copy)
		return *this;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= 5 && this->getSigned() == true)
		std::cout << this->getName() << " has been pardonned by Zafod Beeblebrox." << std::endl;
	else if (this->getSigned() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
