#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie() {};

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " exploded" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
