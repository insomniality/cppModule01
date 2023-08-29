#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
		int 		i;
	public:
		void		announce(void) const;
		const std::string&	nameGetter(void) const;
		void		nameSetter(std::string str);

	Zombie(void);
	Zombie(std::string str);
	~Zombie();
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
