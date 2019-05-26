/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:51:54 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:51:58 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main(void)
{
	Human	human;

	human.action("meleeAttack", "Xin");
	human.action("rangedAttack", "Cait");
	human.action("intimidatingShout", "Minion");
	return(0);
}
