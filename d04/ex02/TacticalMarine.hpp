#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & copy);
		~TacticalMarine(void);
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
		ISpaceMarine* clone(void) const;

		TacticalMarine & operator=(TacticalMarine const & copy);
};
#endif
