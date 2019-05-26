/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:48:21 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:48:25 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int		main(void)
{
	Zombie		*random;
	Zombie		*normal;
	ZombieEvent	monster;

	monster.setZombieType("random1");
	random = monster.randomChump();
	random->announce();
	delete(random);

	monster.setZombieType("normal1");
	normal = monster.newZombie("mina");
	normal->announce();
	delete(normal);
	return(0);
}
