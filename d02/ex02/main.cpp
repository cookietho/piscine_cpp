/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 20:43:12 by minakim           #+#    #+#             */
/*   Updated: 2019/05/23 20:13:51 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//std::cout << a << std::endl;
//std::cout << ++a << std::endl;
//std::cout << a << std::endl;
//std::cout << a++ << std::endl;
//std::cout << a << std::endl;
//std::cout << b << std::endl;
//std::cout << Fixed::max(a, b) << std::endl;
return 0;
}
