/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:56:47 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:56:48 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Recompiling my combat code!" << std::endl;
}

ClapTrap::ClapTrap(std::string nname)
{
	std::cout << "Recompiling my combat code!" << std::endl;
	name = name;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "Holy crap, that worked?" << std::endl;
	*this = copy;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &copy)
{
	std::cout << "Holy crap, that worked?" << std::endl;

	this->hit = copy.hit;
	this->max_h = copy.max_h;
	this->e = copy.e;
	this->max_e = copy.max_e;
	this->lvl = copy.lvl;
	this->name = copy.name;
	this->melee = copy.melee;
	this->ranged = copy.ranged;
	this->armor = copy.armor;

	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Good thing I don't have a soul!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->armor;
	if (damage < 0)
		damage = 0;
	int	hurt = this->hit - (amount - this->armor);

	if (hurt < 0)
	{
		std::cout << "No, nononono NO!" << std::endl;
		this->hit = 0;
	}
	else
	{
		std::cout << "Why did they build me out of galvanized flesh?!"<< std::endl;
		this->hit = hurt;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int	repaired = this->hit + amount;
	if (repaired > this->max_h)
	{
		std::cout << "Hahahahaha! I'm alive!"<< std::endl;
		this->hit = this->max_h;
	}
	else
	{
		std::cout << "Hahahahaha! I'm alive!"<< std::endl;
		this->hit = repaired;
	}
}

