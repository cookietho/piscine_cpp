/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:51:06 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:51:10 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string str);
		~Weapon(void);
		std::string	const&	getType(void);
		void				setType(std::string str);

	private:
		std::string			n_type;
};
#endif
