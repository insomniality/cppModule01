#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon*		weapon;
	public:
		void		attack();
		void		setWeapon(Weapon& weapon);

	HumanB();
	HumanB(std::string name);
	~HumanB();
};

#endif