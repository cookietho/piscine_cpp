#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist()
{
	return ;
}

PowerFist::PowerFist(PowerFist const & copy) : AWeapon(copy)
{
	return ;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
