/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 14:14:07 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 09:21:43 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact
{
  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkSecret;

  public:
	Contact(void);
	~Contact(void);

	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setNumber(std::string number);
	void setDarkSecret(std::string secret);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getNumber() const;
	std::string getDarkSecret() const;

	bool isComplete() const;
};

#endif
