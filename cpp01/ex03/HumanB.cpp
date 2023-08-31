#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name + "attacks with their" + weapon.getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	HumanB::name = name;
}

void HumanB::setWeapon(Weapon weapon)
{
	HumanB::weapon = weapon;
}