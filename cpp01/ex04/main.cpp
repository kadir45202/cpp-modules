#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main( int argc, char **argv ) {

	if (argc != 4) {
		std::cout << "./humans file name string new_string" << std::endl;
		return (1);
	}
	std::string s0 = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s0 == "" || s1 == "" || s2 == "" || s1 == s2) {
		std::cout << "Bad entries" << std::endl;
		return (2);
	}
	std::ifstream   infile(s0.c_str());
	
	if (!infile.is_open()) {
		std::cout << "Bad entries" << std::endl;
		return (3);
	}

	char    mychar;
	std::string wholeFile = "";
	while ( infile ) {
		mychar = infile.get();
		if ( infile )
			wholeFile += mychar;
	}
	infile.close();
	int find = 0;
	std::string start;
	std::string end;
	while (1) {
		find = wholeFile.find(s1);
		if (find == -1)
			break ;
		start = wholeFile.substr(0, find);
		end = wholeFile.substr(find + s1.length(), -1);
		wholeFile = start + s2 + end;
	}

	s0 += ".replace";
	std::ofstream	outfile(s0.c_str());
	if (!outfile.is_open()) {
		std::cout << "Bad entries" << std::endl;
		return (4);
	}
	outfile << wholeFile;
	outfile.close();
	return (0);
}