#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Incorrect number of arguments." << std::endl
			<< "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string outfilename = filename;
	outfilename.append(".replace");

	std::ifstream infile(filename.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: cannot open '" << filename << "'" << std::endl;
		return 1;
	}

	std::ofstream outfile(outfilename);
	if (!outfile.is_open()) {
		std::cerr << "Error: cannot open '" << outfilename << "'" << std::endl;
		return 1;
	}

	std::string line;

	if (s1.empty()) {
		while (std::getline(infile, line))
			outfile << line << std::endl;
		return 0;
	}

	while (std::getline(infile, line))
	{
		std::size_t start = 0;
		while (true) {
			std::size_t pos = line.find(s1, start);
			if (pos == std::string::npos) {
				outfile << line.substr(start);
				break;
			}
			outfile << line.substr(start, pos - start) << s2;
			start = pos + s1.size();
		}
		outfile << std::endl;
	}

	return 0;
}
