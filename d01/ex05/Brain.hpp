/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:49:41 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:49:52 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class	Brain
{
	public:
		Brain(void);
		~Brain(void);
		std::string	identify(void) const;

	private:
//		Brain	n_brain;
};
#endif
