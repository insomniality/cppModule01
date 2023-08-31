#ifndef WEAPHON_HPP
# define WEAPHON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		const	std::string&	getType();
		void					setType(std::string& typ);
	
	// Weapon();
	Weapon(std::string tp);
	~Weapon();
};

#endif