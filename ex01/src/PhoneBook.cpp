/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:34:53 by cschmid           #+#    #+#             */
/*   Updated: 2025/05/29 14:28:05 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
	// Dans la classe phonebook on fait appelle a la fonction phonebook qui est le consructeur
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
	// Dans la classe phonebook on fait appelle a la fonction phonebook destructeur
{
	std::cout << "Destructor called " << std::endl;
	return ;
}
