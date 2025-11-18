#include "../include/Zombie.h"
#include <iostream>

int main()
{
	Zombie *horde = zombieHorde(10, "banana");

	for (int i = 0; i < 10; i++)
	{
		std::cout << horde[i].getName() << " says: ";
		horde[i].announce();
	}

	delete[] horde;
	return 0;
}
