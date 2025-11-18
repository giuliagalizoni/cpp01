#include "../include/Zombie.hpp"
#include <iostream>

Zombie::Zombie() {};

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " destroid" << std::endl;
}

void Zombie::announce()
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName()
{
	return this->_name;
}
