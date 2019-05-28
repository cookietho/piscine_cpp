#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	return ;
}

Peon::~Peon(void)
{
	std::cout<<"Bleuark..."<<std::endl;
	return ;
}

Peon::Peon(Peon const &copy)
{
	std::cout<<"Zog zog."<<std::endl;
	*this = copy;
}

Peon & Peon::operator=(Peon const &copy)
{
	this->_name = copy.getName();
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout<<this->_name + " has been turned into a pink pony !"<<std::endl;
	return ;
}
