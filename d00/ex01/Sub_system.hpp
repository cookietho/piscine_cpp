/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sub_system.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:28:48 by minakim           #+#    #+#             */
/*   Updated: 2019/04/17 22:11:18 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
//#include "PhoneNumber.h"
int	View_menu();

class	Phonebook
{
	private:
		std::string	first_name[8];
		std::string	last_name[8];
		std::string	nickname[8];
		std::string	login[8];
		std::string	postal_addr[8];
		std::string	email[8];
		std::string	number[8];
		std::string	bdate[8];
		std::string	favorite[8];
		std::string	underwear[8];
		std::string	secret[8];

	public:
		void	add(int i);
		void	search(int n);
};
