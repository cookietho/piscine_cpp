#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const & copy)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	(void)copy;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

void	TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attack with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attack with chainsword *" << std::endl;
}

ISpaceMarine *	TacticalMarine::clone(void) const
{
	ISpaceMarine	*copy = new TacticalMarine(*this);

	return (copy);
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & copy)
{
	(void)copy;
	return (*this);
}
