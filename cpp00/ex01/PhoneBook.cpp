/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:43:56 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/11 16:12:16 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	numContact = 0;
	n = 7;
	done = 0;
	std::cout << "\nWelcome in your phone book.\n\nYou can choose between those three commands:" <<std::endl;
	std::cout << "ADD - To add a contact\nSEARCH - To search for a contact\nEXIT - To exit your phone book\n" <<std::endl;
}

void	PhoneBook::add()
{
	std::string	fN, lN, nN, pN, dS;
	
	std::cin.ignore();
	std::cout << "\nEnter the first name: ";
	std::getline(std::cin, fN);
	std::cout << "Enter the last name: ";
	std::getline(std::cin, lN);
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, nN);
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, pN);
	std::cout << "Enter the darkest secret: ";
	std::getline(std::cin, dS);
	if(numContact == 8)
	{
		if(n > 0)
		{
			cont[numContact - n - 1].setContact(fN, lN, nN, pN, dS);
			n--;
		}
		else
		{
			cont[numContact - n - 1].setContact(fN, lN, nN, pN, dS);
			n = 7;
		}
	}
	else
	{
		cont[numContact].setContact(fN, lN, nN, pN, dS);
		numContact++;
	}
}

void	PhoneBook::search()
{
	int	i = 0, id = 0;
	std::cout << "\n|" << std::setw(10) << "Id" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" <<std::endl;
	while(i < numContact)
	{
		std::cout << "|" << std::setw(10) << i + 1 << std::flush;
		cont[i].getContact();
		i++;
	}
	std::cout << "\nPlease enter the contact id that you want to see informations.\n" <<std::endl;
	std::cin >> id;
	cont[id - 1].getInfo();
}

void	PhoneBook::exit()
{
	std::cout << "\nGoodbye :).\n" << std::endl;
	done = 1;
}