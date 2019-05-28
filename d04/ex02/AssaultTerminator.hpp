#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & copy);
		~AssaultTerminator(void);
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
		ISpaceMarine* clone(void) const;

		AssaultTerminator & operator=(AssaultTerminator const & copy);
};
#endif
