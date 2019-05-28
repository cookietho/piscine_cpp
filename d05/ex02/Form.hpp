#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:
		Form();
		Form(std::string, int, int);
		~Form();
		Form(Form const & copy);
		Form & operator = (Form const & copy);

		std::string	getName() const;
		int			getSGrade() const;
		int			getEGrade() const;
		bool		getSigned() const;
		void		beSigned(Bureaucrat & copy);
		void		SignForm();
		virtual void	execute(Bureaucrat const &) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const &);
				GradeTooHighException & operator=(GradeTooHighException const &);
				~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
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
		int const			_sgrade;
		int const			_egrade;
		bool				_signed;
};

std::ostream & operator<<(std::ostream &, Form const &);
#endif
