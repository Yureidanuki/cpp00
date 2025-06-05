/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:32:20 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/05 13:14:06 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/******************METHOD******************/

// void PhoneBook::Firstname()
// {
// 	std::string Firstname;
// 	std::cout << "Veuillez entrer un prénom :  " << std::endl;
// 	std::getline(std::cin >> std::ws, Firstname);
// 	contact[_size].setFirstName(Firstname);
// }
void PhoneBook::Firstname(int index)
{
	std::cout << "Veuillez entrer un prénom : ";
	std::getline(std::cin >> std::ws, contact[index]._firstName);
}

void PhoneBook::Lastname(int index)
{
	std::cout << "Veuillez entrer un nom de famille :  " << std::endl;
	std::getline(std::cin >> std::ws, contact[index]._lastName);
}

void PhoneBook::Nickname(int index)
{
	std::string Nickname;
	std::cout << "Veuillez entrer un surnom : " << std::endl;
	std::getline(std::cin >> std::ws, contact[index]._nickName);
}

bool PhoneBook::isValidPhoneNumber(const std::string &number)
{
	for (std::size_t i = 0; i < number.length(); ++i)
	{
		if (!std::isdigit(static_cast<unsigned char>(number[i])))
			return (false);
		if (number.length() != 10)
			return (false);
	}
	return (true);
}

void PhoneBook::PhoneNumber(int index)
{
	std::string Number;
	std::cout << "Veuillez entrer un numéro de téléphone 📞: ";
	std::cin >> Number;
	while (!isValidPhoneNumber(Number))
	{
		std::cout << "Veuillez entrer un numéro de téléphone valide 📞: ";
		std::cin >> Number;
	}
	contact[index].setNumber(Number);
}

void PhoneBook::DarkSecret(int index)
{
	std::cout << "Veuillez entrer son plus lourd secret 👀: " << std::endl;
	std::getline(std::cin >> std::ws, contact[index]._lastName);
}

void PhoneBook::add()
{
	int	index;

	index = _size % 8;
	if (_size >= 8)
		std::cout << YELLOW << "Capacité atteinte ; le plus ancien est remplacé.\n" << RESET;
	contact[index] = Contact();
	std::cout << GREEN << BOLD << "Vous avez choisi d'enregistrer un nouveau contact " << RESET << std::endl;
	Firstname(index);
	// Lastname(index);
	// Nickname(index);
	// PhoneNumber(index);
	// DarkSecret(index);
	std::cout << GREEN << BOLD << "Vous avez entré le nouveau contact : " << contact[index]._firstName << RESET << std::endl;
	_size++;
}
