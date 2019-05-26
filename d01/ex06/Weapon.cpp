/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:50:57 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:51:00 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : n_type(str)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const&	Weapon::getType(void)
{
	return (n_type);
}

void				Weapon::setType(std::string str)
{
	this->n_type = str;
}
