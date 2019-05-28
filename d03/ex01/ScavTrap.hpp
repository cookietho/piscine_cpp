/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:56:35 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:56:37 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <cstdlib>
#include <iostream>

class	ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string nname);
		ScavTrap(ScavTrap const &);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const &copy);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const & target);

	private:
		int	hit;
		int	max_h;
		int	energy;
		int	max_e;
		int	lvl;
		std::string name;
		int	melee;
		int	ranged;
		int	armor;
};
#endif
