#ifndef ENEMY_HPP
# define ENEMY_HPP
#include <iostream>

class	Enemy
{
	private:
		std::string	_type;
		int			_hp;

	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		std::string	const & getType() const;
		int					getHP() const;
		Enemy(Enemy const & copy);
		Enemy & operator=(Enemy const &copy);

		virtual void	takeDamage(int);
};
#endif
