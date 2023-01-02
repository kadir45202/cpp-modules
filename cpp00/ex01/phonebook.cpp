#include "phonebook.hpp"

void search()
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
    std::cout << "│" << std::setw(10) << std::right << "index";
    std::cout << "│" << std::setw(10) << std::right << "first name";
    std::cout << "│" << std::setw(10) << std::right << "last name";
    std::cout << "│" << std::setw(10) << std::right << "nickname" << "│" << std::endl;
    std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
}



int main()
{
    PhoneBook phonebook;
    std::string	str;
    int id = -1;
    phonebook.prompt();
    
    while(42)
    {
        std::cout << "> ";
        std::getline(std::cin, str);
        if(str == "ADD")
            std::cout << "ADD" << std::endl;
        else if(str == "SEARCH")
        {
            if (!(std::cin >> id) || id < 0 || id > 7)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Error: Invalid ID" << std::endl;
			}
        }
        else if(str == "EXIT")
            return 0;
        else
        {
            std::cout << "Wrong word try again" << std::endl;
            phonebook.prompt();
        }
    }
}