/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:06:32 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:46:44 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sub_system.hpp"
//#include "PhoneNumber.h"
//#include <iostream>

int		main()
{
	Phonebook	mina;;
	int			input;
	int			i;

	i = 0;
	while (true)
	{
		input = View_menu();
		switch (input)
		{
			case 1:
				mina.add(i++);
				break;
			case 2:
				mina.search(i);
				break;
			case 3:
				return(0);
			case 0:
				std::cout << std::endl;
				std::cout << "============================" <<std::endl;
				std::cout << "= CANNOT READ YOUR COMMAND =" <<std::endl;
				std::cout << "============================" <<std::endl;
				break;
			default:;
		}
	}
}
