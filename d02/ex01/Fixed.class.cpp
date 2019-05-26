/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:44:02 by minakim           #+#    #+#             */
/*   Updated: 2019/05/21 20:48:19 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"


Fixed::Fixed(void)
{
	this->fixed_pt = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout<<"Int constructor called"<<std::endl;
	this->fixed_pt = n << this->nb_fb;
}

Fixed::Fixed(const float n)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->fixed_pt = roundf(n * (1 << this->nb_fb));
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
	return ;
}

Fixed::Fixed(const Fixed &old_obj)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = old_obj;
	return ;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout<<"Assignation operator called"<<std::endl;
	this->fixed_pt = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return(this->fixed_pt);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_pt = raw;
}

float	Fixed::toFloat(void) const
{
	float	x;
	x = (float)this->getRawBits() / (1 << this->nb_fb);
	return (x);
}

int		Fixed::toInt(void) const
{
	int	y;
	y = this->getRawBits() >> this->nb_fb;
	return (y);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
