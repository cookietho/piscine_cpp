#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const & copy);
		~PlasmaRifle();
		using AWeapon::operator=;

		void			attack() const;
};

#endif
