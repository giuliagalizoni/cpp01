#include "../include/Zombie.h"

int main()
{
	Zombie *zombie = newZombie("Brain-eater");
	zombie->announce();
	delete zombie;

	randomChump("Wormhead");
}
