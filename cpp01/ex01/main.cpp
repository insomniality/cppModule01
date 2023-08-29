#include "Zombie.hpp"

int main()
{
	Zombie a;
	Zombie b;

	a = b;
	
	//

	Zombie* mikas = zombieHorde(10, "Mika");
	Zombie* ptr = new Zombie("Edgar");

	delete ptr;
	delete[] mikas;


}
