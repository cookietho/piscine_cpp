/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:43:24 by minakim           #+#    #+#             */
/*   Updated: 2019/05/23 20:13:09 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void)
{
	std::cout<<"construct"<<std::endl;
	this->fixed_pt = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout<<"copy construct"<<std::endl;
	*this = copy;
}

Fixed::Fixed(const int n)
{
	std::cout<<"int n"<<std::endl;
	setRawBits(n << fb);
}

Fixed::Fixed(const float n)
{
	std::cout<<"float n"<<std::endl;
	setRawBits(roundf(n * (1 << fb)));
}

Fixed::~Fixed(void)
{
	std::cout<<"destruct"<<std::endl;
	return ;
}

Fixed & Fixed::operator=(const Fixed &rhs)
{
	std::cout<<"operator="<<std::endl;
	this->fixed_pt = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &rhs)
{
	std::cout<<"operator>"<<std::endl;
	return (this->fixed_pt > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs)
{
	std::cout<<"operator<"<<std::endl;
	return (this->fixed_pt < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs)
{
	std::cout<<"operator>="<<std::endl;
	return (this->fixed_pt >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs)
{
	std::cout<<"operator<="<<std::endl;
	return (this->fixed_pt <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs)
{
	std::cout<<"operator=="<<std::endl;
	return (this->fixed_pt == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs)
{
	std::cout<<"operator!="<<std::endl;
	return (this->fixed_pt != rhs.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &rhs)
{
	std::cout<<"operator+"<<std::endl;
	Fixed	f;

	f.setRawBits(this->fixed_pt + rhs.fixed_pt);
	return (f);
}

Fixed	Fixed::operator-(const Fixed &rhs)
{
	std::cout<<"operator-"<<std::endl;
	Fixed	f;

	f.setRawBits(this->fixed_pt - rhs.fixed_pt);
	return (f);
}

Fixed	Fixed::operator*(const Fixed &rhs)
{
	std::cout<<"operator*"<<std::endl;
	Fixed	f;
/*
	f.setRawBits(this->fixed_pt * rhs.fixed_pt);
*/
	f.fixed_pt = (this->fixed_pt * rhs.fixed_pt) >> this->fb;
	return (f);
}

Fixed	Fixed::operator/(const Fixed &rhs)
{
	std::cout<<"operator/"<<std::endl;
	Fixed	f;

/*
	f.setRawBits(this->fixed_pt / rhs.fixed_pt);
*/
	f.fixed_pt = (this->fixed_pt << this->fb) / rhs.fixed_pt;
	return (f);
}

Fixed & Fixed::operator++(void)
{
	std::cout<<"operator++void"<<std::endl;
	this->fixed_pt++;
	return (*this);
}

Fixed & Fixed::operator--(void)
{
	std::cout<<"operator--void"<<std::endl;
	this->fixed_pt--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	std::cout<<"operator++"<<std::endl;
	Fixed	f;
	
	f = *this;
	this->fixed_pt++;
	return (f);
}

Fixed	Fixed::operator--(int)
{
	std::cout<<"operator--"<<std::endl;
	Fixed	f;

	f= *this;
	this->fixed_pt--;
	return (f);
}

int		Fixed::getRawBits(void) const
{
	return (this->fixed_pt);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_pt = raw;
}

float	Fixed::toFloat(void) const
{
	float	x;
	x = (float)this->getRawBits() / (1 << this->fb);
	return (x);
}

int		Fixed::toInt(void) const
{
	int	y;
	y = this->getRawBits() >> this->fb;
	return (y);
}

const Fixed & Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1.getRawBits() > fp2.getRawBits())
		return (fp2);
	return (fp1);
}

const Fixed & Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1.getRawBits() > fp2.getRawBits())
		return (fp1);
	return (fp2);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
