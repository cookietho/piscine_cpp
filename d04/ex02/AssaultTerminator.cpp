#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & copy)
{
	std::cout << "* teleports from space *" << std::endl;
	(void)copy;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

void	AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attack with chainfists *" << std::endl;
}

ISpaceMarine *	AssaultTerminator::clone(void) const
{
	ISpaceMarine	*copy = new AssaultTerminator(*this);

	return (copy);
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & copy)
{
	(void)copy;
	return (*this);
}
