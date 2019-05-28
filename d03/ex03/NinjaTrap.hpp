/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:57:49 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:57:50 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap : public ClapTrap
{
		public:

		NinjaTrap(void);
		NinjaTrap(NinjaTrap const & copy);
		NinjaTrap(std::string name);
		~NinjaTrap(void);

		NinjaTrap & operator=(NinjaTrap const & copy);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void 		ninjaShoebox(NinjaTrap const & target);
//		void 		ninjaShoebox(ClapTrap & target);
		void 		ninjaShoebox(FragTrap const & target);
		void 		ninjaShoebox(ScavTrap const & target);
};
#endif
