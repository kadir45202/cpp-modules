/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 07:54:14 by kcetin            #+#    #+#             */
/*   Updated: 2023/01/03 11:14:53 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cstring>
# include <limits>

class Contact{
public:
	bool set_info(int last_id)
	{
		std::cout << "Enter the first name: " << std::endl;
		std::getline(std::cin, info[0]);
		std::cout << "Enter the last name: " << std::endl;
		std::getline(std::cin, info[1]);
		std::cout << "Enter the nickname: " << std::endl;
		std::getline(std::cin, info[2]);
		std::cout << "Enter the phone number: " << std::endl;
		std::getline(std::cin, info[3]);
		std::cout << "Enter the darkest secret: " << std::endl;
		std::getline(std::cin, info[4]);;
		for (int i = 0; i < 5; i++)
			if (info[i] == "")
			{
				std::cout << "Empty field in contact data. Unable to add." << std::endl;
				return (false);
			}
		id = last_id;
		return (true);
	}
	const std::string* get_info() { return info; }
private:
	int id;
	std::string info[5];
};

class PhoneBook{
public:
    size_t  person_number;
    std::string persons[8];

	PhoneBook()
	{
		last_id = 0;
	}

    void prompt(void)
    {
		std::cout << std::endl <<"Welcome to PhoneBook" << std::endl;
    	std::cout << "ADD    : Add user to the book" << std::endl;
    	std::cout << "SEARCH : Looking for somebody" << std::endl;
    	std::cout << "EXIT   : Goodbye" << std::endl;
    }

	void add()
	{
		Contact new_contact;
		if(new_contact.set_info(last_id))
		{
			if (contact[last_id].get_info()[0] != "")
				std::cout << "limit is full" << std::endl;
			contact[last_id] = new_contact;
			last_id  = (last_id + 1) % 8;
		}
		prompt();
	}

	void users()
	{
		for (int i = 0; i < 8; i++) 
		{
			if (contact[i].get_info()[0] != "")
			{
				std::cout << "|" << std::setw(10) << i;
				for (int j = 0; j < 3; j++)
				{
					std::cout << "|";
					if (contact[i].get_info()[j].length() > 10)
						std::cout << contact[i].get_info()[j].substr(0, 9) << ".";
					else
						std::cout << std::setw(10) << contact[i].get_info()[j];
					}
					std::cout << "|" << std::endl;
			}
		}
	}

	void display(int id)
	{
		if (contact[id].get_info()[0] != "") {
			std::cout << "Contact info:" << std::endl;
			std::cout << id << std::endl;
			for (int j = 0; j < 5; j++)
				std::cout << contact[id].get_info()[j] << std::endl;
		}
		else
			std::cout << "Error: Invalid ID" << std::endl;
	}
private:
	Contact contact[8];
	int last_id;
};

#endif