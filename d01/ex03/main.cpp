/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:49:18 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:49:21 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde	Z1 = ZombieHorde(10);
	ZombieHorde	Z2 = ZombieHorde(5);
	std::cout<< "---print 10 Zombies--"<<std::endl;
	Z1.announce();
	std::cout<< "---print 5 Zombies--"<<std::endl;
	Z2.announce();
	return(0);
}
