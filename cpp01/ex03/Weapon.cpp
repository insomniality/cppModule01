#include "Weapon.hpp"

const	std::string& Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string typ)
{
	Weapon::type = typ;
}

Weapon::Weapon(std::string tp)
{
	setType(tp);
}

//this