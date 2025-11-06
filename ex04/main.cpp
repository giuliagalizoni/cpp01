#include <iostream>
#include <fstream>
#include <string>

static std::string ft_replace(const std::string& line, const std::string& s1, const std::string& s2)
{
	if (s1.empty()) return line;

	std::string replaced;
	std::size_t start = 0;

	while (true) {
		std::size_t pos = line.find(s1, start);
		if (pos == std::string::npos) {
			replaced.append(line.substr(start));
			break;
		}
		replaced.append(line.substr(start, pos - start));
		replaced.append(s2);
		start = pos + s1.size();
	}
	return replaced;
}

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Incorrect number of arguments.\n"
			<< "Usage: " << argv[0] << " <filename> <s1> <s2>\n";
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string outfilename = filename;
	outfilename.append(".replace");

	std::ifstream infile(filename.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: cannot open '" << filename << "'\n";
		return 1;
	}

	std::ofstream outfile(outfilename.c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error: cannot open '" << outfilename << "'\n";
		return 1;
	}

	std::string line;
	while (std::getline(infile, line))
		outfile << ft_replace(line, s1, s2) << "\n";

	return 0;
}
