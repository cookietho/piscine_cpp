/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:57:28 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:57:29 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <cstdlib>

class	ClapTrap
{
	protected:
		int	hit;
		int	max_h;
		int	e;
		int	max_e;
		int	lvl;
		std::string	name;
		int	melee;
		int	ranged;
		int	armor;

	public:
		ClapTrap(void);
		ClapTrap(std::string nname);
		ClapTrap(ClapTrap const &copy);
		ClapTrap & operator=(ClapTrap const &copy);
		~ClapTrap(void);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string	getName(void);
};
#endif
