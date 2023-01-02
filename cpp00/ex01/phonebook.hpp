#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <limits>

class PhoneBook{
public:
    size_t  person_number;
    std::string persons[8];

    void prompt(void)
    {
		std::cout << "Welcome to PhoneBook" << std::endl;
    	std::cout << "ADD    : Add user to the book" << std::endl;
    	std::cout << "SEARCH : Looking for somebody" << std::endl;
    	std::cout << "EXIT   : Goodbye" << std::endl;
    }

private:

};

class Contact{

};

#endif