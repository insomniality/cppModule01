#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return ((Zombie *)(new Zombie(name)));
}
