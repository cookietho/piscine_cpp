/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:49:58 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:50:00 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	Brain	tmp;
	this->n_brain = tmp;
}

Human::~Human(void)
{
	return ;
}

Brain const&	Human::getBrain(void)
{
	return (this->n_brain);
}

std::string	Human::identify(void)
{
	return(this->n_brain.identify());
}
