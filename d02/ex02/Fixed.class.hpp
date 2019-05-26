/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:43:29 by minakim           #+#    #+#             */
/*   Updated: 2019/05/02 20:43:32 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <cmath>
#include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);
		Fixed & operator = (const Fixed &rhs);
		bool	operator > (const Fixed &rhs);
		bool	operator < (const Fixed &rhs);
		bool	operator >= (const Fixed &rhs);
		bool	operator <= (const Fixed &rhs);
		bool	operator == (const Fixed &rhs);
		bool	operator != (const Fixed &rhs);
		Fixed	operator + (const Fixed &rhs);
		Fixed	operator - (const Fixed &rhs);
		Fixed	operator * (const Fixed &rhs);
		Fixed	operator / (const Fixed &rhs);
		//prefix
		Fixed & operator ++ (void);
		Fixed & operator -- (void);
		//postfix
		Fixed	operator ++ (int);
		Fixed	operator -- (int);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static const Fixed & min(const Fixed &fp1, const Fixed &fp2);
		static const Fixed & max(const Fixed &fp1, const Fixed &fp2);
	
	private:
		int	fixed_pt;
		static const int	fb = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif
