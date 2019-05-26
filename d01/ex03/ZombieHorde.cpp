/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:49:00 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:49:03 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <ctime>
#include <cstdlib>

ZombieHorde::ZombieHorde(int N)
{
	this->n = N;
	this->n_zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		this->n_zombie[i].setType("Z1");
		this->n_zombie[i].setName(randomChump());
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	return ;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->n; i++)
	{
		this->n_zombie[i].announce();
	}
}

std::string	ZombieHorde::randomChump(void)
{
	int	i;

	std::string	ran_name[5] = {"hehe", "haha", "hoho", "hihi", "huhu"};

	srand(time(0));
	i = rand() % 5;
	return (ran_name[i]);
}
