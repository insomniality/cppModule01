#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "";
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::~Zombie()
{
	std::cout << name + "is dead" << std::endl;
}
