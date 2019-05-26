/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sub_system.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:01:58 by minakim           #+#    #+#             */
/*   Updated: 2019/04/17 21:54:35 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sub_system.hpp"

int	View_menu()
{
	std::cout << std::endl;
	std::cout << "ADD: new contact information" << std::endl;
	std::cout << "SEARCH: display the list and search" << std::endl;
	std::cout << "EXIT: quit" << std::endl;
	std::cout << "==> ";

	std::string	command;
	int		n;
	std::cin >> command;
	if (command == "ADD")
		n = 1;
	else if (command == "SEARCH")
		n = 2;
	else if (command == "EXIT")
		n = 3;
	else
		n = 0;
	return (n);
}

void	Phonebook::add(int i)
{
	if (i < 8)
	{
		std::cout<<"First Name: ";
		std::cin >> first_name[i];
		std::cout<<"Last_name: ";
		std::cin >> last_name[i];
		std::cout<<"Nickname: ";
		std::cin >> nickname[i];
		std::cout<<"Login: ";
		std::cin >> login[i];
		std::cout<<"Postal Address: ";
		std::cin >> postal_addr[i];
		std::cout<<"Email address: ";
		std::cin >> email[i];
		std::cout<<"Phone Number: ";
		std::cin >> number[i];
		std::cout<<"Birthday Date: ";
		std::cin >> bdate[i];
		std::cout<<"Favorite Meal: ";
		std::cin >> favorite[i];
		std::cout<<"Underwear Color: ";
		std::cin >> underwear[i];
		std::cout<<"Darkest Secret: ";
		std::cin >> secret[i];
	}
	else
	{
		std::cout<<std::endl;
		std::cout<<"====================================="<<std::endl;
		std::cout<<"= Can't store more than 8 contacts. ="<<std::endl;
		std::cout<<"====================================="<<std::endl;
	}
}

std::string	trim(std::string str)
{
	std::string	newstr;

	if (str.size() > 10)
		newstr = str.substr(0, 9) + ".";
	else
		newstr = str;
	return (newstr);
}

void	Phonebook::search(int n)
{
	int	index;

	std::cout<<std::endl;
	if (n >= 1 && n <= 8)
	{
		for (int i = 0; i < n && i < 8; i++)
		{
			std::cout<<std::setw(10);
			std::cout<<i<<"|";
			std::cout<<std::setw(10);
			std::cout<<trim(first_name[i])<<"|";
			std::cout<<std::setw(10);
			std::cout<<trim(last_name[i])<<"|";
			std::cout<<std::setw(10);
			std::cout<<trim(nickname[i])<<"|"<<std::endl;
		}

		std::cout<<std::endl;
		std::cout<<"Index of the desired entry: ";
		std::cin >> index;
		std::cout<<number[index]<<std::endl;
	}
	else
		std::cout<<"NO CONTACTS TO SHOW."<<std::endl;
}
