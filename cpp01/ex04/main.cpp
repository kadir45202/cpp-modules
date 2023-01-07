#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "./name filename string1 string2" << std::endl;
        return 0;
    }

	std::string str1, str2;
	std::fstream filein;
	//newfile.append(".replace");
	std::fstream	fileout(std::string(argv[1]) + ".replace");
	str1 = argv[2];
	str2 = argv[3];
	
	filein.open(argv[1]);
	if (filein.is_open()) {
    std::string line;
    while (std::getline(filein, line))
	{
        std::cout << line << std::endl;
		fileout << line;
		fileout << '\n';
	}
    }
	else
	{
		std::cout << "file is invalid" << std::endl;
		return 0;
	}
}