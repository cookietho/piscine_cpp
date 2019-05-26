/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:51:38 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:51:40 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout<<"Melee Attack " + target + "."<<std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout<<"Range Attack " + target + "."<<std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout<<"Intimidating Shout " + target + "."<<std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*f[3])(std::string const & target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	const std::string actions[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	for (int i = 0; i < 3; i++)
	{
		if (actions[i] == action_name)
			(this->*f[i])(target);
	}
}
