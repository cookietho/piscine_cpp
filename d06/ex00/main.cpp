/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <minakim@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 13:10:20 by mhwangbo          #+#    #+#             */
/*   Updated: 2019/05/06 14:06:29 by mhwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

void	castDouble(std::string no)
{
	std::cout << "double: ";
	try
	{
		std::cout << static_cast<double>(std::stod(no)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	castFloat(std::string no)
{
	std::cout << "float: ";
	try
	{
		std::cout << static_cast<float>(std::stof(no)) << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	castInt(std::string no)
{
	std::cout << "int: ";
	try
	{
		std::cout << std::stoi(no) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}

}

void	castChar(std::string no)
{
	std::cout << "char: ";
	try
	{
		char ret = static_cast<char>(std::stoi(no));
		if (ret > 32 && ret < 127)
			std::cout << ret << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		std::cout<<std::fixed<<std::setprecision(1);
		castChar(av[1]);
		castInt(av[1]);
		castFloat(av[1]);
		castDouble(av[1]);
	}
	else
	{
		std::cout<<"Usage: ./convert number"<<std::endl;
	}
	return (0);
}
