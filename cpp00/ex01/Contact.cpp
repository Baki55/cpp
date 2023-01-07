/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:54:31 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/07 16:38:19 by bkhatib          ###   ########.fr       */
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
	std::cout << "The contact is successfully added to your Phonebook." std::endl;
}

void Contact::getContact(void)
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
};