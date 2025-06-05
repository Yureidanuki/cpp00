/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:39:54 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/05 10:59:47 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/******************METHOD******************/

void PhoneBook::search()
{
	if (_size == 0)
	{
		std::cout << RED << "Le répertoire est vide.\n" << RESET;
		return ;
	}

	std::cout << CYAN << BOLD << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Index   |  f.name  |  l.name  | nickname |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << RESET << std::endl;

    for (int i = 0; i < _size; ++i)
    {
        std::cout << "|" << std::setw(10) << i
                  << "|" << fit10(contact[i]._firstName)
                  << "|" << fit10(contact[i]._lastName)
                  << "|" << fit10(contact[i]._nickName) << "|\n";
    }
    std::cout << CYAN << BOLD
              << "+----------+----------+----------+----------+\n" << RESET;

    std::cout << BLUE << "Entrez l’index du contact à afficher : " << RESET;
    std::string in;
    std::getline(std::cin >> std::ws, in);

    if (in.length() != 1 || in[0] < '0' || in[0] >= '0' + _size)
    {
        std::cout << RED << "Index invalide.\n" << RESET;
        return ;
    }
    int idx = in[0] - '0';

    Contact &c = contact[idx];
    std::cout << GREEN << BOLD
              << "---- Détail du contact " << idx << " ----\n" << RESET
              << "Prénom          : " << c._firstName   << '\n'
              << "Nom de famille  : " << c._lastName    << '\n'
              << "Surnom          : " << c._nickName    << '\n'
              << "Numéro          : " << c._phoneNumber << '\n'
              << "Plus lourd secret: " << c._darkSecret << '\n';
}
