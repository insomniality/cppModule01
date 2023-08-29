#include "Zombie.hpp"

void Zombie::announce(void) const
{

	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

const std::string& Zombie::nameGetter(void) const
{
	return (name);
}

void Zombie::nameSetter(std::string str)
{
	name = str;
}

Zombie::Zombie(std::string str)
{
	name = str;
}

Zombie::Zombie(void)
{

}

Zombie::~Zombie()
{
	std::cout << name + "is dead" << std::endl;
}
