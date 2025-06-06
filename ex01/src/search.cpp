/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:39:54 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 12:36:43 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/******************METHOD******************/

void PhoneBook::search()
{
	int	displayIndex;
	int	idx;
	int	realIndex;

	if (_size == 0)
	{
		std::cout << RED << "Le répertoire est vide.\n" << RESET;
		return ;
	}
	std::cout << CYAN << BOLD << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  Index   |  f.name  |  l.name  | nickname |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << RESET << std::endl;
	for (int i = 1; i < _size; ++i)
	{
        if (_size < 8)
            displayIndex = i;
        else
            displayIndex = (_index + i) % 8;
		std::cout << "|" << std::setw(10) << i << "|" << fit10(contact[displayIndex].getFirstName()) << "|" << fit10(contact[displayIndex].getLastName()) << "|" << fit10(contact[displayIndex].getNickName()) << "|\n";
	}
	std::cout << CYAN << BOLD << "+----------+----------+----------+----------+\n" << RESET;
	std::cout << BLUE << "Entrez l’index du contact à afficher : " << RESET;
	std::string in;
	if(!std::getline(std::cin >> std::ws, in))
		std::exit(0);
	std::istringstream iss(in);
	if (!(iss >> idx) || idx < 0 || idx >= _size)
	{
		std::cout << RED << "Index invalide.\n" << RESET;
		return ;
	}
	if (_size < 8)
		realIndex = idx;
	else
		realIndex = (_index + idx) % 8;
	if (!contact[realIndex].isComplete())
	{
		std::cout << RED << "Ce contact est incomplet et ne peut être affiché.\n" << RESET;
		return ;
	}
	const Contact &c = contact[realIndex];
	std::cout << GREEN << BOLD
			  << "---- Détail du contact " << idx << " ----\n" << RESET
			  << "Prénom           : " << c.getFirstName() << '\n'
			  << "Nom de famille   : " << c.getLastName() << '\n'
			  << "Surnom           : " << c.getNickName() << '\n'
			  << "Numéro           : " << c.getNumber() << '\n'
			  << "Plus lourd secret: " << c.getDarkSecret() << '\n';
}
