/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:45:31 by minakim           #+#    #+#             */
/*   Updated: 2019/04/25 18:02:24 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*heap = new Pony();

	heap->set_gender("Boy");
	heap->set_color("Milky White");
	heap->set_name("Teddy");
	heap->set_age(3);
	heap->set_breed("Irish Draught");

	std::cout << "She is a " << heap->get_gender() << "." << std::endl;
	std::cout << "She is " << heap->get_color() << "." << std::endl;
	std::cout << "Her name is " << heap->get_name() << "." << std::endl;
	std::cout << "She is " << heap->get_age() << "years old." << std::endl;
	std::cout << "She is " << heap->get_breed() << "." <<std::endl;
}

void	ponyOnTheStack(void)
{
	Pony	stack;

	stack.set_gender("Girl");
	stack.set_color("Light Brown");
	stack.set_name("Mari");
	stack.set_age(2);
	stack.set_breed("New Forest Pony");

	std::cout << "She is a " << stack.get_gender() << "." << std::endl;
	std::cout << "She is " << stack.get_color() << "." << std::endl;
	std::cout << "Her name is " << stack.get_name() << "." << std::endl;
	std::cout << "She is " << stack.get_age() << "years old." << std::endl;
	std::cout << "She is " << stack.get_breed() << "." <<std::endl;
}

int	main()
{
	std::cout << "Pony On The Stack First..." << std::endl;
	ponyOnTheStack();
	std::cout << "." << std::endl;
	std::cout << "." << std::endl;
	std::cout << "." << std::endl;
	std::cout << "." << std::endl;
	std::cout << "." << std::endl;
	std::cout << "Pony On The Heap Next..." << std::endl;
	ponyOnTheHeap();
	return(0);
}
