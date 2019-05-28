#include "Bureaucrat.hpp"

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




	return (0);
}
