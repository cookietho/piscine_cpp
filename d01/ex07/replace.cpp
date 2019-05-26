/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:51:30 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:51:32 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	replace_str(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	myfile(filename);
	std::ofstream	newfile(filename + ".replace");
	std::string		line;

	if (!myfile || !newfile)
	{
		std::cout<<"Error -> cannnot read files"<<std::endl;
		return ;
	}
	while (getline(myfile, line))
	{
		std::size_t	pos;
		while ((pos = line.find(s1)) != std::string::npos)
			line.replace(pos, s1.length(), s2);
		newfile << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Error -> 4 arguments"<<std::endl;

	else
		replace_str(av[1], av[2], av[3]);
	return (0);
}
