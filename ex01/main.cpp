/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 19:47:08 by dgomez-m          #+#    #+#             */
/*   Updated: 2024/06/15 05:07:28 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
void show_menu()
{
	std::cout << "Please enter a command: " << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "------------------------------" << std::endl;
}

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
    PhoneBook phonebook;
    while (42)
    {
        show_menu();
        std::string command;
        std::getline(std::cin, command);
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            phonebook.add_contact();
        }
        else if (command == "SEARCH")
        {
            phonebook.display_contacts();
        }
        else
        {
            std::cout << "Invalid command" << std::endl;
        }
    }
    return 0;
}


