/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:44:08 by minakim           #+#    #+#             */
/*   Updated: 2019/05/21 20:48:22 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <cmath>
#include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);
		Fixed(const Fixed &old_obj);
		Fixed & operator = (const Fixed &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int	fixed_pt;
		static const int	nb_fb = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif
