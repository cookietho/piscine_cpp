/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:44:47 by minakim           #+#    #+#             */
/*   Updated: 2019/05/21 18:12:47 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
#include <iostream>
class	Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &old_obj);
		Fixed & operator = (const Fixed &op);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	fixed_pt;
		static const int	nb_fb = 8;
};
#endif
