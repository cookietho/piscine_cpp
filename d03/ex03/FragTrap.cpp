/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:57:33 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:57:36 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : hit(100), max_h(100), energy(100), max_e(100), lvl(1), melee(30), ranged(20), armor(5)
{
	std::cout<<"Yoo hoooooooooo!"<<std::endl;
}

FragTrap::FragTrap(std::string nname) : hit(100), max_h(100), energy(100), max_e(100), lvl(1), name(nname), melee(30), ranged(20), armor(5)
{
	std::cout<<"Yoo hooooooooooo!"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout<<"Wow! You're not dead?"<<std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout<<"I can see... the code"<<std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &copy)
{
	std::cout<<"I'm over here!"<<std::endl;
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " + this->name + " attacks " + target + " at range, causing " <<  this->ranged << " points of damage !"<<std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout<<"FR4G-TP " + this->name + " attacks " + target + " at melee, causing " << this->melee << " points of damage !"<<std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int	damage = amount - this->armor;
	if (damage < 0)
		damage = 0;

	int	hurt = this->hit - (amount - this->armor);
	if (hurt < 0)
	{
		std::cout<<"I can see through time..."<<std::endl;
		this->hit = 0;
	}
	else
	{
		std::cout<<"Oh my Godk I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!"<<std::endl;
		this->hit = hurt;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int	repaired = this->hit + amount;
	if (repaired > this->max_h)
	{
		std::cout<<"Good as new, I think. Am I leaking?"<<std::endl;
		this->hit = this->max_h;
	}
	else
	{
		std::cout<<"Good as new, I think. Am I leaking?"<<std::endl;
		this->hit = repaired;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string possible_attacks[5] = {"Funzerker", "Laser Inferno", "Gun Wizard", "Pirate Ship Mode", "One Shot Wonder"};
	std::string yell[5] = {"ah", "ahh", "ahhh", "ahhhh", "ahhhh"};
	srand(time(NULL));
	int	i = rand() % 5;

	if (this->energy >= 25)
	{
		this->energy -= 25;
		std::cout << yell[i]<<std::endl;
		std::cout << "FR4G-TP " + this->name + " used " + possible_attacks[i] + " on " + target << std::endl;
	}
	else
		std::cout<<"Hnngh! Empty!"<<std::endl;
}
