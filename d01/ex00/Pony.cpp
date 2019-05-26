/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:44:14 by minakim           #+#    #+#             */
/*   Updated: 2019/04/25 18:02:26 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::set_gender(std::string gender)
{
	this->pony_gender = gender;
}

void	Pony::set_color(std::string color)
{
	this->pony_color = color;
}

void	Pony::set_name(std::string name)
{
	this->pony_name = name;
}

void	Pony::set_age(int age)
{
	this->pony_age = age;
}

void	Pony::set_breed(std::string breed)
{
	this->pony_breed = breed;
}

std::string	Pony::get_gender(void)
{
	return(this->pony_gender);
}

std::string	Pony::get_color(void)
{
	return(this->pony_color);
}

std::string	Pony::get_name(void)
{
	return(this->pony_name);
}

int			Pony::get_age(void)
{
	return(this->pony_age);
}

std::string	Pony::get_breed(void)
{
	return(this->pony_breed);
}
