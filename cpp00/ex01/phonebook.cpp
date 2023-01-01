#include <iostream>

void prompt(void)
{
    std::cout << "Welcome to PhoneBook" << std::endl;
    std::cout << "ADD    : Add user to the book" << std::endl;
    std::cout << "SEARCH : Looking for somebody" << std::endl;
    std::cout << "EXIT   : Goodbye" << std::endl;
}

int main(int argc, char **argv)
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
            std::cout << "SEARCH" << std::endl;
        else if(str == "EXIT")
            return 0;
        else
        {
            std::cout << "Wrong word try again" << std::endl;
            prompt();
        }
    }
}