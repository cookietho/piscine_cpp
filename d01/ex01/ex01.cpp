/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:03:21 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:47:25 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
void memoryLeak()
{
        std::string*        panthere = new std::string("String panthere");
        std::cout << *panthere << std::endl;
		delete (panthere);
}
