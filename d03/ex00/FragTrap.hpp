/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:56:06 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:56:08 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class	FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string nname);
		FragTrap(const FragTrap &copy);
		~FragTrap(void);
		FragTrap & operator = (FragTrap const &copy);
	;
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
		
	private:
		int	hit;
		int	max_h;
		int	energy;
		int	max_e;
		int	lvl;
		std::string	name;
		int	melee;
		int	ranged;
		int	armor;
};
#endif
