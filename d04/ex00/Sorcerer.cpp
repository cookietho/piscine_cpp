#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout<<_name + " , " + _title + ", is born !"<<std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout<< _name + " , " + _title + ", is dead. Consequences will never be the same !"<<std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	*this = copy;
}

Sorcerer & Sorcerer::operator=(Sorcerer const &copy)
{
	this->_name = copy.getName();
	this->_title = copy.getTitle();
	return (*this);
}

void	Sorcerer::polymorph(Victim const & target)
{
	target.getPolymorphed();
	return ;
}

void	Sorcerer::polymorph(Peon const & target)
{
	target.getPolymorphed();
	return ;
}

std::string	Sorcerer::getName() const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle() const
{
	return (this->_title);
}

std::ostream & operator << (std::ostream & out, Sorcerer const & s)
{
	std::cout<<"I am " + s.getName() + ", " + s.getTitle() + ", and I like ponies !"<<std::endl;
	return out;
}
