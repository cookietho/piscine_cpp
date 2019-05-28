#include "Bureaucrat.hpp"
#include "Form.hpp"

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


	Form f1 = Form("Form", 80, 20);
	std::cout << f1;
	try
	{
		m.sForm(f1);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << f1;
	try
	{
		m.sForm(f1);
	}
	catch(Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------Error Case-------------" << std::endl;
	Bureaucrat m2 = Bureaucrat("Mina", 100);
	Form f2 = Form("Form2", 80, 20);
	std::cout << m2;
	std::cout << f2;
	try
	{
		m2.sForm(f2);
	}
	catch(Form::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << f2;

	return (0);
}
