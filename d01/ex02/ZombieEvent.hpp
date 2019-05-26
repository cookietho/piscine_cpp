/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:44:12 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:48:14 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include <iostream>
#include "Zombie.hpp"

class	ZombieEvent
{
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void	setZombieType(std::string zombietype);
		Zombie	*newZombie(std::string name);
		Zombie	*randomChump(void);
		std::string	getZombie(void);
	
	private:
		std::string	n_type;
	//	std::string	n_name;
};
#endif
