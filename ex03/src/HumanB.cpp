#include "../include/HumanB.hpp"
#include "../include/Weapon.hpp"

#include <iostream>

HumanB::HumanB() {}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

void	HumanB::attack()
{
	if (!_weapon)
	{
		std::cout << _name << " has no weapon." << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
