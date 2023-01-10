/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:54:31 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/10 15:40:43 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {};

void Contact::setContact(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5)
{
	firstName = s1;
	lastName = s2;
	nickname = s3;
	phoneNumber = s4;
	darkestSecret = s5;
	std::cout << "The contact is successfully added to your Phonebook." << std::endl;
}

std::string Contact::getStr(std::string str) const
{
	if(str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::getContact(void)
{
	std::cout << "|" << std::setw(10) << this->getStr(this->firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->getStr(this->lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->getStr(this->nickname) << std::flush;
	std::cout << "|" << std::endl;
};