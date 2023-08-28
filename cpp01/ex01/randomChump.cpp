#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie* p = newZombie(name);
	p->announce();
	// delete p; // ste?
}
