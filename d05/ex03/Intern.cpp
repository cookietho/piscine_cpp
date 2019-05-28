#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern(Intern const & copy) {
	*this = copy;
}

Intern & Intern::operator =(Intern const &) {
	return (*this);
}

Intern::~Intern() {
	return ;
}

Form* Intern::makeForm(std::string form, std::string target) {
	if (form == "shrubbery creation")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "robotomy request")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "presidential pardon")
	{
		std::cout << "Intern creates " << form << std::endl;
		return (new PresidentialPardonForm(target));
	}
	std::cout << "ERROR: no such form" << std::endl;
	return (NULL);
}
