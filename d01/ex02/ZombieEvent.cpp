/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:47:58 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:48:04 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>
#include <ctime>

ZombieEvent::ZombieEvent(void)
{
	return;
}

ZombieEvent::~ZombieEvent(void)
{
	return;
}

void		ZombieEvent::setZombieType(std::string zombietype)
{
	this->n_type = zombietype;
}

std::string	ZombieEvent::getZombie(void)
{
	return(this->n_type);
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newz = new Zombie(name, this->n_type);
	return (newz);
}

Zombie	*ZombieEvent::randomChump(void)
{
	int	i;
	std::string ran_name[5] = {"hehe", "haha", "hoho", "hihi", "huhu"};

	//This will create diff sequence of random #s on every program run.
	//Use current time as seed for random generator.
	srand(time(0));
	i = rand() % 5;
	return(new Zombie(ran_name[i], this->n_type));
}
