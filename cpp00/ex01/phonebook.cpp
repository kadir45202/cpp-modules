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

void prompt(void)
{
    std::cout << "Welcome to PhoneBook" << std::endl;
    std::cout << "ADD    : Add user to the book" << std::endl;
    std::cout << "SEARCH : Looking for somebody" << std::endl;
    std::cout << "EXIT   : Goodbye" << std::endl;
}

int main()
{
    std::string	str;

    prompt();
    
    while(42)
    {
        std::cout << "> ";
        std::getline(std::cin, str);
        if(str == "ADD")
            std::cout << "ADD" << std::endl;
        else if(str == "SEARCH")
            search();
        else if(str == "EXIT")
            return 0;
        else
        {
            std::cout << "Wrong word try again" << std::endl;
            prompt();
        }
    }
}