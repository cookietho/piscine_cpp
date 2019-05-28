/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:58:03 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:58:05 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <cstdlib>

int		main(void)
{
	FragTrap	f("Frag");

	f.rangedAttack("Killer");
	f.meleeAttack("Killer");
	f.takeDamage(105);
	f.beRepaired(100);
	f.vaulthunter_dot_exe("Killer");
	f.takeDamage(1);

	ScavTrap	s("Scav");

	s.rangedAttack("Enemy");
	s.takeDamage(15);
	s.meleeAttack("Enemy");
	s.takeDamage(20);
	s.takeDamage(103);
	s.takeDamage(103);
	s.beRepaired(100);
	s.beRepaired(100);
	s.challengeNewcomer("Enemy");
	s.challengeNewcomer("Enemy");
	s.challengeNewcomer("Enemy");

	NinjaTrap	n("Ninja");
	NinjaTrap	e("Enemy");

	std::cout << std::endl << "--- ninjaShoebox ---" << std::endl;
//	n.ninjaShoebox(f);
//	n.ninjaShoebox(s);
//	n.ninjaShoebox(e);
	return (0);
}
