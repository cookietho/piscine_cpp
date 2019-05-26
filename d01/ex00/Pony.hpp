/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:38:45 by minakim           #+#    #+#             */
/*   Updated: 2019/04/25 18:02:29 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PONY_HPP
# define PONY_HPP
#include <iostream>

class	Pony
{
	public:
		void		set_gender(std::string gender);
		void		set_color(std::string color);
		void		set_name(std::string name);
		void		set_age(int age);
		void		set_breed(std::string breed);

		std::string	get_gender();
		std::string	get_color();
		std::string	get_name();
		int			get_age();
		std::string	get_breed();

	private:
		std::string	pony_gender;
		std::string	pony_color;
		std::string	pony_name;
		std::string	pony_breed;
		int			pony_age;
};
#endif
