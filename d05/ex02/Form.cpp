#include "Form.hpp"

Form::Form() : _name("default"), _sgrade(80), _egrade(20), _signed(false)
{
	return ;
}

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _sgrade(sgrade), _egrade(egrade), _signed(false)
{
	return ;
}

Form::~Form()
{
	return ;
}

Form::Form(Form const & copy) : _name(copy._name), _sgrade(copy._sgrade), _egrade(copy._egrade)
{
	*this = copy;
}

Form & Form::operator=(Form const & copy)
{
	_signed = copy.getSigned();
	return (*this);
}

std::string	Form::getName() const
{
	return (_name);
}

int			Form::getSGrade() const
{
	return (_sgrade);
}

int			Form::getEGrade() const
{
	return (_egrade);
}

bool		Form::getSigned() const
{
	return (_signed);
}

void		Form::beSigned(Bureaucrat & copy)
{
	if (copy.getGrade() > this->_sgrade)
	{
		throw Form::GradeTooLowException();
	}
	else if (this->_sgrade == 1)
		std::cout<<this->_name<<" cannot sign "<<this->_name<<" because the form is already signed."<<std::endl;
	else
		std::cout<<copy.getName()<<" signs "<<this->_name<<"."<<std::endl;
		this->SignForm(); //this->SignForm();
}

void		Form::SignForm()
{
	this->_signed = true;
}

Form::GradeTooHighException::GradeTooHighException() {
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy)
{
	*this = copy;
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const &)
{
	return *this;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

Form::GradeTooLowException::GradeTooLowException() {
}

Form::GradeTooLowException::GradeTooLowException::GradeTooLowException(GradeTooLowException const & copy)
{
	*this = copy;
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const &)
{
	return *this;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

std::ostream & operator<<(std::ostream & o, Form const & copy)
{
	o << copy.getName() <<", Form signed? " << copy.getSigned() << " E. Grade " << copy.getEGrade() << " S. Grade " << copy.getSGrade() << std::endl;
	return o;
}
