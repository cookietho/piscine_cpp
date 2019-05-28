/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:55:58 by minakim           #+#    #+#             */
/*   Updated: 2019/05/23 23:58:33 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : hit(100), max_h(100), energy(100), max_e(100), lvl(1), melee(30), ranged(20), armor(5)
{
	std::cout<<"Constructor called"<<std::endl;
}

FragTrap::FragTrap(std::string nname) : hit(100), max_h(100), energy(100), max_e(100), lvl(1), name(nname), melee(30), ranged(20), armor(5)
{
	std::cout<<"Constructor with name called"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout<<"copy constructor called"<<std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout<<"Destructor called"<<std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const &copy)
{
	std::cout<<"assignation oerator called"<<std::endl;
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
		std::cout<<"Dead"<<std::endl;
		this->hit = 0;
	}
	else
	{
		std::cout<<"Hurt!!"<<std::endl;
		this->hit = hurt;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int	repaired = this->hit + amount;
	if (repaired > this->max_h)
	{
		std::cout<<"Fully recoverd"<<std::endl;
		this->hit = this->max_h;
	}
	else
	{
		std::cout<<"Healed"<<std::endl;
		this->hit = repaired;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string possible_attacks[5] = {"attack1", "attack2", "attack3", "attack4", "attack5"};
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
		std::cout<<"K.O."<<std::endl;
}

/*
int hit;
int max_h;
int energy;
int max_e;
int lvl;
std::string name;
int melee;
int ranged;
int armor;
*/
