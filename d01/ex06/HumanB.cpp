/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:50:39 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:50:42 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : n_name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
//taking the value of weapon (reference to it)
// put it in n_weapon
void	HumanB::setWeapon(Weapon& weapon)
{
	this->n_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout<<this->n_name<<" attacks with his "<<n_weapon->getType()<<std::endl;
}
