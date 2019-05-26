/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:49:09 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:49:14 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include <iostream>
#include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
		void	announce(void);
		void	setType(std::string type);
		void	setName(std::string name);
		std::string	randomChump(void);

	private:
		int		n;
		Zombie	*n_zombie;
		std::string	n_name;
		std::string	n_type;
};
#endif
