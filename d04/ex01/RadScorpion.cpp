#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const & copy) : Enemy(copy)
{
	return ;
}

void	RadScorpion::takeDamage(int damage)
{
	return (Enemy::takeDamage(damage));
}
