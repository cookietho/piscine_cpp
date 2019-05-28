#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void)
{
	std::cout<<"------Bureaucratic m------"<<std::endl;
	Bureaucrat m = Bureaucrat("Tax Collector", 1);
	std::cout << m;

	try
	{
		std::cout << " addGrade(5)" << std::endl;
		m.addGrade(5);
		std::cout << m;
		std::cout << " addGrade(100)" << std::endl;
		m.addGrade(100);
		std::cout << m;
		std::cout << " addGrade(100)" << std::endl;
		m.addGrade(100);
		std::cout << m;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << " addGrade(-5)" << std::endl;
		m.addGrade(-5);
		std::cout << m;
		std::cout << " addGrade(-100)" << std::endl;
		m.addGrade(-100);
		std::cout << m;
		std::cout << " addGrade(-100)" << std::endl;
		m.addGrade(-100);
		std::cout << m;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "--------ShrubberyCreationForm---------" << std::endl;
	Bureaucrat a = Bureaucrat("a", 149);
	Bureaucrat b = Bureaucrat("b", 20);
	ShrubberyCreationForm SForm = ShrubberyCreationForm("Kristine");
	SForm.getSigned();
	try
	{
		a.executeForm(SForm);
		SForm.execute(a);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		SForm.execute(b);
		std::cout << SForm;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------RobotomyRequestForm---------" << std::endl;
	Bureaucrat c = Bureaucrat("c", 149);
	Bureaucrat d = Bureaucrat("d", 20);
	RobotomyRequestForm RForm = RobotomyRequestForm("Dillon");
	RForm.getSigned();
	try
	{
		RForm.execute(c);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		RForm.execute(d);
		std::cout << RForm;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------PresidentialPardonForm---------" << std::endl;
	Bureaucrat g = Bureaucrat("g", 100);
	Bureaucrat f = Bureaucrat("f", 4);
	PresidentialPardonForm PForm = PresidentialPardonForm("Mr President");
	PForm.getSigned();
	try
	{
		PForm.execute(g);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		PForm.execute(f);
		std::cout << PForm;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
