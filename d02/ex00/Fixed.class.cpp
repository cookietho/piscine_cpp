/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:44:40 by minakim           #+#    #+#             */
/*   Updated: 2019/05/21 18:12:43 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	this->fixed_pt = 0;
	std::cout<<"Default constructor called"<<std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
	return ;
}

Fixed::Fixed(const Fixed &old_obj)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = old_obj; // 복상생성자를 대입연산자에 넣어서 대입연산자를 메인에서 부르지않아도 대입연산자가 생성되어 getRawbits()를 실행
//	this->fixed_pt = old_obj.getRawBits(); 아니면 복상생성자에 getRawBits()함수를 써서 발류를 넣은다. 
	return ;
}

Fixed& Fixed::operator=(const Fixed &op)
{
	std::cout<<"Assignation operator called"<<std::endl;
	this->fixed_pt = op.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->fixed_pt);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_pt = raw;
}
