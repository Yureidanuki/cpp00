/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:36:02 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/05 13:13:21 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iomanip>
# include <iostream>
# include <sstream>

# define RESET "\033[0m"
# define BOLD "\033[1m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define CYAN "\033[36m"

static inline std::string fit10(const std::string &s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (std::string(10 - s.length(), ' ') + s);
}

class PhoneBook
{
  private:
	Contact contact[8];
	int _size;
	// int _next;
	bool isValidPhoneNumber(const std::string& number);

  public:
	void affichage();
	void add();
	void search();
	void reset();
	void Firstname(int index);
	void Lastname(int index);
	void Nickname(int index);
	void PhoneNumber(int index);
	void DarkSecret(int index);
	PhoneBook(void);
	~PhoneBook(void);
};

#endif