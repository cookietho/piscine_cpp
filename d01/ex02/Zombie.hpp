/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:42:03 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:47:53 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
//#include "ZombieEvent.hpp"

class	Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void		announce(void);

	private:
		std::string	n_type;
		std::string	n_name;
};
#endif
