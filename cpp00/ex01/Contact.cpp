/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:54:31 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/07 16:21:24 by bkhatib          ###   ########.fr       */
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
}

void Contact::print_info (void)
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
};