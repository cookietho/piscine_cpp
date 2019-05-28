#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>

class	AWeapon
{
	private:
		std::string	_name;
		int			_damage;
		int			_apcost;

	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & copy);
		AWeapon & operator=(AWeapon const &copy);
		virtual ~AWeapon();
		std::string	const & getName() const;
		int			getAPCost() const;
		int			getDamage() const;
		virtual void	attack() const = 0;
};
#endif
