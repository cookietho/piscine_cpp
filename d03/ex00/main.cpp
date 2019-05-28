/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:56:12 by minakim           #+#    #+#             */
/*   Updated: 2019/05/03 21:56:14 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::cout<<"------BEGINE------"<<std::endl;
	FragTrap	f("f1");

	std::cout<<"------ATTACKS------"<<std::endl;
	f.rangedAttack("Kill");
	f.meleeAttack("Kill");

	std::cout<<"------DEAD------"<<std::endl;
	f.takeDamage(105);

	std::cout<<"------REPAIRED------"<<std::endl;
	f.beRepaired(100);

	std::cout<<"------vault_hunter------"<<std::endl;
	f.vaulthunter_dot_exe("Kill");
	f.takeDamage(1);
	return (0);
}
