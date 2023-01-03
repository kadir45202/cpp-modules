/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:53:31 by kcetin            #+#    #+#             */
/*   Updated: 2023/01/03 13:26:24 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string	str = ".";
    int id = -1;
    phonebook.prompt();
    
	while (str != "EXIT")
    {
        std::cout << "> ";
        std::getline(std::cin, str);
        if(str == "ADD")
            phonebook.add();
        else if(str == "SEARCH")
        {
            phonebook.users();
            std::cout << "enter number" << std::endl;
            if (!(std::cin >> id) || id < 0 || id > 7)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Error: Invalid ID" << std::endl;
			}
            else
                phonebook.display(id);
        }
    }
}