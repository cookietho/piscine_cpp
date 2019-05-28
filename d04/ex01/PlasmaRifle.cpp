#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & copy) : AWeapon(copy)
{
	return ;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
