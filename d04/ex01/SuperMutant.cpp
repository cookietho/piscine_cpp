#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const & copy) : Enemy(copy)
{
	return ;
}

void	SuperMutant::takeDamage(int damage)
{
	return (Enemy::takeDamage(damage - 3));
}
