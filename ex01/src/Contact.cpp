/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:26:29 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 11:58:51 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/******************CONSTRUCTEUR******************/

Contact::Contact()
{
}

Contact::~Contact(void)
{
}

/******************SETTEUR******************/

void Contact::setFirstName(std::string FirstName)
{
	this->_firstName = FirstName;
}
void Contact::setLastName(std::string LastName)
{
	this->_lastName = LastName;
}
void Contact::setNickName(std::string NickName)
{
	this->_nickName = NickName;
}
void Contact::setNumber(std::string Number)
{
	this->_phoneNumber = Number;
}
void Contact::setDarkSecret(std::string Secret)
{
	this->_darkSecret = Secret;
}
/******************GETTEUR******************/

std::string Contact::getFirstName() const {
	return _firstName;
}

std::string Contact::getLastName() const {
	return _lastName;
}

std::string Contact::getNickName() const {
	return _nickName;
}

std::string Contact::getNumber() const {
	return _phoneNumber;
}

std::string Contact::getDarkSecret() const {
	return _darkSecret;
}

/******************METHOD******************/

bool Contact::isComplete() const
{
	return (!_firstName.empty() && !_lastName.empty() && !_nickName.empty()
		&& !_phoneNumber.empty() && !_darkSecret.empty());
}