#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
		int i;
	public:
		void announce(void) const;

	Zombie(std::string str);
	~Zombie();
};

Zombie* newZombie(std::string name);

#endif
