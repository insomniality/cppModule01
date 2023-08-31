#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name + "attacks with their" + weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	HumanA::name = name;
	HumanA::weapon = weapon;
}
