#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy)
{
	*this = copy;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & copy)
{
	_grade = copy.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}
//?
void		Bureaucrat::addGrade(int n)
{
	if ((this->_grade + n) < 1)
		throw Bureaucrat::GradeTooHighException();
	else if ((this->_grade + n) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += n;
}

void		Bureaucrat::sForm(Form & form)
{
	if (this->_grade <= form.getSGrade() && form.getSigned() == 0)
	{
		std::cout<<this->_name << " signed " <<form.getName() << std::endl;
		form.SignForm();
	}
	else if (this->_grade > form.getSGrade())
	{
		std::cout<<this->_name<<" cannot sign "<<form.getName()<<" Grade Too Low."<<std::endl;
	}
	else if (form.getSigned() == 1)
	{
		std::cout<<this->_name<<" cannot sign "<< form.getName()<<" Form signed already."<<std::endl;
	}
}

void Bureaucrat::executeForm( Form const & copy ) const
{
	if (this->getGrade() < copy.getEGrade())
	{
		std::cout << this->_name << " executes " << copy.getName() << "." << std::endl;
		copy.execute(*this);
	}
	else
		std::cout << "Cannot execute form because grade is too low." << std::endl;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const &copy)
{
	o << copy.getName() << ", bureaucrat grade " << copy.getGrade() << "." <<std::endl;
	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy)
{
	*this = copy;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &)
{
	{
		return *this;
	}
}
//change the string
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("ERROR : too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & copy)
{
	*this = copy;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("EROOR : too low");
}
