#ifndef PEON_HPP
# define PEON_HPP
#include <iostream>
#include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon(std::string name);
		~Peon(void);
		Peon(Peon const &copy);
		Peon & operator=(Peon const &copy);
		void	getPolymorphed() const;

};
#endif
