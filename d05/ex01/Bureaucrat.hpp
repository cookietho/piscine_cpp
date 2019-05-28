#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const & copy);
		Bureaucrat & operator=(Bureaucrat const & copy);
		Bureaucrat(std::string, int);
		~Bureaucrat();
		std::string getName() const;
		int			getGrade() const;
		void		addGrade(int n);
		void		sForm(Form & form);

		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const &);
				GradeTooHighException & operator=(GradeTooHighException const &);
				~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public  std::exception
		{
			public:
				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const &);
				GradeTooLowException & operator=(GradeTooLowException const &);
				~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};

	private:
		std::string const	_name;
		int					_grade;
	//	int	_ranges;
};
std::ostream & operator<<(std::ostream &, Bureaucrat const &);
#endif
