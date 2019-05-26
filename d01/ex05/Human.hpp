/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:50:05 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:50:07 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <iostream>
#include "Brain.hpp"

class	Human
{
	public:
		Human(void);
		~Human(void);
		std::string	identify(void);
		Brain const&	getBrain(void);

	private:
		Brain	n_brain;
};
#endif
