#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Default", 72, 45) 
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) 
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) 
{
	*this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator =(RobotomyRequestForm const & copy) 
{
	if (this != &copy)
		return *this;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	if (executor.getGrade() <= 45 && this->getSigned() == true)
	{
		std::cout << "ROoooBoooT" << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->getName() << " has been robotomized successfully." << std::endl;
		else
			std::cout << " failed to robotomize" << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "The form isn't signed yet." << std::endl;
	else
		throw Form::GradeTooLowException();
}
