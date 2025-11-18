#include "../include/Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Incorrect number of arguments.\n"
				  << "Usage: " << argv[0] << " <level>\n";
		return 1;
	}

	Harl harl;

	std::string names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = -1;

	for (int i = 0; i < 4; ++i)
	{
		if (names[i] == argv[1])
		{
			index = i;
			break;
		}
	}

	switch (index)
	{
	case 0:
		harl.complain("DEBUG");
	case 1:
		harl.complain("INFO");
	case 2:
		harl.complain("WARNING");
	case 3:
		harl.complain("ERROR");
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]";
		break;
	}

	return 0;
}
