#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name(name), _damage(damage), _apcost(apcost)
{
	return ;
}

AWeapon::AWeapon(AWeapon const & copy)
{
	*this = copy;
	return ;
}

AWeapon::~AWeapon(){
	return ;
}

AWeapon & AWeapon::operator=(AWeapon const &copy)
{
	this->_name = copy.getName();
	this->_apcost = copy.getAPCost();
	this->_damage = copy.getDamage();
	return (*this);
}

std::string	const & AWeapon::getName() const
{
	return (this->_name);
}

int					AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int					AWeapon::getDamage() const
{
	return (this->_damage);
}
