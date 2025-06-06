/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:34:53 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 11:55:03 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/******************CONSTRUCTEUR******************/

PhoneBook::PhoneBook(void)
{
	_size = 0;
	_index = 0;
	for (int i = 0; i < 8; ++i)
		contact[i] = Contact();
}

PhoneBook::~PhoneBook(void)
{
}

/******************METHOD******************/

void PhoneBook::affichage()
{
    std::string input;
    std::cout << BLUE << BOLD
              << "~~~~~~~~~~Bienvenu dans le PhoneBook~~~~~~~~~~\n" << RESET;

    while (true)
    {
        std::cout << BLUE
                  << "Veuillez entrer une des commandes suivantes : "
                  << "ADD, SEARCH, EXIT \n> " << RESET;

        if (!(std::cin >> input))
            break;
        if (input == "ADD")
            add();
        else if (input == "SEARCH")
            search();
        else if (input == "EXIT")
            break;
        else
            std::cout << RED << BOLD
                      << "La commande '" << input
                      << "' n'est pas correcte.\n" << RESET;
    }
}

