/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 02:20:10 by minakim           #+#    #+#             */
/*   Updated: 2019/04/17 17:34:36 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_cap(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		std::cout<<(char)toupper(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	if (ac >= 2)
	{
		while (av[j])
		{
			ft_cap(av[j]);
			j++;
		}
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout<<std::endl;
	return (0);
}
