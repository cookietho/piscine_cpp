/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:57:43 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:57:46 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	hit = 60;
	max_h = 60;
	e = 120;
	max_e = 120;
	lvl = 1;
	melee = 60;
	ranged = 5;
	armor = 0;
	std::cout << "I am a newly graduated ninja!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const nname): ClapTrap(nname)
{
	hit = 60;
	max_h = 60;
	e = 120;
	max_e = 120;
	lvl = 1;
	melee = 60;
	ranged = 5;
	armor = 0;
	name = nname;

	std::cout << "I am a newly graduated ninja!!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy): ClapTrap(copy) {

	std::cout << "Clone Technique!" << std::endl;
	*this = copy;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "(poke) There is no reaction. It just seems like a dead ninja." << std::endl;
}

NinjaTrap &  NinjaTrap::operator=(NinjaTrap const &copy) 
{
	std::cout << "One more me!" << std::endl;

	this->name = copy.name;
	this->hit = copy.hit;
	this->max_h = copy.max_h;
	this->e = copy.e;
	this->max_e = copy.max_e;
	this->lvl = copy.lvl;
	this->melee = copy.melee;
	this->ranged = copy.ranged;
	this->armor = copy.armor;
	
	return (*this);
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap " + this->name + " attacks " + target + " at range, causing " << this->ranged << " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NinjaTrap " + this->name + " attacks " + target + ", causing " << this->melee << " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target) {

	std::cout << this->name << " used Gust Slash on "<< std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target) {

	std::cout << this->name << " used Ninjutsu on " << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target) {

	std::cout << this->name << " use Hellfrog Medium on "  << std::endl;
}
