#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class	Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(Sorcerer const &copy);
		Sorcerer & operator=(Sorcerer const &copy);
		//void	polymorph(Victim const & target);
		//void	polymorph(Peon const & target);
		void	polymorph(Victim const &target);
		void	polymorph(Peon const &target);
		std::string	getName() const;
		std::string	getTitle() const;

	private:
		std::string	_name;
		std::string	_title;
};

// putting it at the std.
std::ostream & operator << (std::ostream & out, Sorcerer const & s);
#endif
