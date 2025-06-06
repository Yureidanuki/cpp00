/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:32:20 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 12:38:06 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/******************METHOD******************/
void PhoneBook::Firstname(int index)
{
	std::string firstName;
	std::cout << "Veuillez entrer un prénom 🌸: ";
	if(!std::getline(std::cin >> std::ws, firstName))
		std::exit(0);
	contact[index].setFirstName(firstName);
}

void PhoneBook::Lastname(int index)
{
	std::string lastName;
	std::cout << "Veuillez entrer un nom de famille 💮: ";
	if(!std::getline(std::cin >> std::ws, lastName))
			std::exit(0);
	contact[index].setLastName(lastName);
}

void PhoneBook::Nickname(int index)
{
	std::string nickname;
	std::cout << "Veuillez entrer un surnom 🍀: ";
	if(!std::getline(std::cin >> std::ws, nickname))
		std::exit(0);
	contact[index].setNickName(nickname);
}

bool PhoneBook::isValidPhoneNumber(const std::string &number)
{
	if (number.length() != 10)
		return false;

	for (std::size_t i = 0; i < number.length(); ++i)
	{
		if (!std::isdigit(static_cast<unsigned char>(number[i])))
			return false;
	}
	return true;
}

void PhoneBook::PhoneNumber(int index)
{
	std::string number;
	std::cout << "Veuillez entrer un numéro de téléphone 📞: ";
	if(!std::getline(std::cin >> std::ws, number))
		std::exit(0);
	while (!isValidPhoneNumber(number))
	{
		std::cout << "Veuillez entrer un numéro de téléphone valide 📞: ";
		if(!std::getline(std::cin >> std::ws, number))
			std::exit(0);
	}
	contact[index].setNumber(number);
}

void PhoneBook::DarkSecret(int index)
{
	std::string secret;
	std::cout << "Veuillez entrer son plus lourd secret 👀: ";
	if(!std::getline(std::cin >> std::ws, secret))
		std::exit(0);
	
	contact[index].setDarkSecret(secret);
}

void PhoneBook::add()
{
	std::cout << GREEN << BOLD << "Vous avez choisi d'enregistrer un nouveau contact " << RESET << std::endl;

	if (_size == 8)
		std::cout << YELLOW << "Capacité atteinte ; le plus ancien est remplacé.\n" << RESET;

	contact[_index] = Contact();

	Firstname(_index);
	Lastname(_index);
	Nickname(_index);
	PhoneNumber(_index);
	DarkSecret(_index);

	if (_size < 8)
		_size++;
	_index = (_index + 1) % 8;
	std::cout << GREEN << BOLD << "Vous avez entré un nouveau contact" << RESET << std::endl;
}

