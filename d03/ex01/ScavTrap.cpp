/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:56:31 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:56:32 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : hit(100), max_h(100), energy(50), max_e(50), lvl(1), melee(20), ranged(15), armor(3)
{
	std::cout<<"Yoo hoooooooooo!"<<std::endl;
}

ScavTrap::ScavTrap(std::string nname) : hit(100), max_h(100), energy(50), max_e(50), lvl(1), name(nname), melee(20), ranged(15), armor(3)
{
	std::cout<<"Yoo hoooooooooo!"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	std::cout<<"Wow! You're not dead?"<<std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "I can see... the code"<< std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "I'm over here!" << std::endl;

	this->hit = copy.hit;
	this->max_h = copy.max_h;
	this->energy = copy.energy;
	this->max_e = copy.max_e;
	this->lvl = copy.lvl;
	this->name = copy.name;
	this->melee = copy.melee;
	this->ranged = copy.ranged;
	this->armor = copy.armor;

	return (*this);
}

void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " + this->name + " attacks " + target + " at range, causing " << this->ranged << " points of damage!" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " + this->name + " attacks " + target + ", causing " << this->melee << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->armor;
	if (damage < 0)
		damage = 0;
	int	hurt = this->hit - (amount - this->armor);

	if (hurt < 0)
	{
		std::cout << "I can see through time..." << std::endl;
		this->hit = 0;
	}
	else
	{
		std::cout<<"Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!"<< std::endl;
		this->hit = hurt;
	}
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	int	repaired = this->hit + amount;
	if (repaired > this->max_h)
	{
		std::cout << "Good as new, I think. Am I leaking?"<<std::endl;
		this->hit = this->max_h;
	}
	else
	{
		std::cout << "Good as new, I think. Am I leaking?"<<std::endl;
		this->hit = repaired;
	}
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string possible_attacks[5] = {"Miniontrap", "Rubber Ducky", "Senseless Sacrifice", "Medbot", "Torgue Fiesta"};
	srand(time(NULL));
	int		i = rand() % 5;

	if (this->energy >= 25)
	{
		this->energy -= 25;
		std::cout << "Look out everybody, things are about to get awesome!";
	std::cout << "ScavTrap " + this->name + " used " + possible_attacks[i] + " on "+ target << std::endl;
	}
	else
		std::cout << "Coming up empty!" << std::endl;
}
