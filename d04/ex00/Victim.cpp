#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout<<"Some random victim called " + _name + " just pooped !"<<std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout<<"Victim " + _name + " just died for no apparent reason !"<<std::endl;
	return ;
}

Victim::Victim(Victim const &copy)
{
	*this = copy;
}

Victim & Victim::operator=(Victim const &copy)
{
	this->_name = copy.getName();
	return (*this);
}

std::string	Victim::getName() const
{
	return (this->_name);
}

void	Victim::getPolymorphed() const
{
	std::cout<<this->_name + " has been turned into a cute little sheep !"<<std::endl;
	return ;
}

std::ostream & operator << (std::ostream & out, Victim const & v)
{
	out<<"I'm " + v.getName() + " and I like otters !"<<std::endl;
	return (out);
}
