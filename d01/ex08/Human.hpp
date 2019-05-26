/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:51:44 by minakim           #+#    #+#             */
/*   Updated: 2019/04/30 18:51:46 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <iostream>
class Human
{
private:
void meleeAttack(std::string const & target);
void rangedAttack(std::string const & target);
void intimidatingShout(std::string const & target);
public:
void action(std::string const & action_name, std::string const & target);
};
#endif
