#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB()
{
	
}

HumanB::~HumanB()
{
	
}