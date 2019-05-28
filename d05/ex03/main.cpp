#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void)
{
	Intern	intern;

	Form*	shrubbery;
	Form*	robotomy;
	Form*	presidential;

	shrubbery = intern.makeForm("shrubbery creation", "Mina");
	robotomy = intern.makeForm("robotomy request", "Robot");
	presidential = intern.makeForm("presidential pardon", "President");
	std::cout << "shrubbery, shrubbery targeted on " << shrubbery->getName() << std::endl;
	std::cout << "robotomy, robotomy targeted on " << robotomy->getName() << std::endl;
	std::cout << "presidential, presidential targeted on " << presidential->getName() << std::endl;

	delete (shrubbery);
	delete (robotomy);
	delete (presidential);
	return (0);
}
