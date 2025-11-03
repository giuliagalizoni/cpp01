#ifndef ZOMBIE_CLASS
#define ZOMBIE_CLASS

#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();
		void	setName(std::string name);
		std::string	getName();
};

#endif
