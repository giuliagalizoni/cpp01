#include "../include/Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Incorrect number of arguments.\n"
			<< "Usage: " << argv[0] << " <level>\n";
		return 1;
	}

	Harl harl;
	harl.complain(std::string(argv[1]));

	return 0;
}
