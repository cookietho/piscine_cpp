#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const & copy);
		~PowerFist();
		using AWeapon::operator=;

		void			attack() const;
};

#endif
