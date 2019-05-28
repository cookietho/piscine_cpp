#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
	typedef struct	s_squad
	{
		ISpaceMarine	*marines;
		s_squad			*next;
	}				t_squad;

private:
	int			_number;
	t_squad*	_squad;

public:

	Squad(void);
	Squad(Squad const & copy);
	~Squad(void);

	int		getCount() const;
	ISpaceMarine*	getUnit(int n) const;
	int		push(ISpaceMarine* marine);

	Squad & operator=(Squad const & copy);
};
#endif
