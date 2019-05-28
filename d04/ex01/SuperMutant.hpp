#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
#include <iostream>
# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const & copy);
		~SuperMutant();
		using Enemy::operator=;

		void	takeDamage(int);
};

#endif
