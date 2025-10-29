#include "../include/Zombie.h"

int	main()
{
	Zombie *zombie = newZombie("Joao");
	delete zombie;

	randomChump("Maria");
}
