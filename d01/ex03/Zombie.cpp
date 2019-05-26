/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:48:31 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:48:46 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

/*
Zombie::Zombie(std::string name, std::string type)
{
	this->n_type = type;
	this->n_name = name;
}
*/

Zombie::Zombie(void)
{
	return;
}
Zombie::~Zombie(void)
{
	return;
}

void	Zombie::setType(std::string type)
{
	this->n_type = type;
}

void	Zombie::setName(std::string name)
{
	this->n_name = name;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->n_name << " (" << this->n_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
