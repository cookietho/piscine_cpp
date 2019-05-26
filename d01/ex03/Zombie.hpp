/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:48:50 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:48:56 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
//#include "ZombieEvent.hpp"

class	Zombie
{
	public:
	//	Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		void		setType(std::string type);
		void		setName(std::string name);
		void		announce(void);

	private:
		std::string	n_type;
		std::string	n_name;
};
#endif
