/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:43:56 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/01 14:03:19 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <stdexcept>

PhoneBook::PhoneBook()
{
	numContact = 0;
	n = 7;
	done = 0;
	std::cout << "\nWelcome in your phone book.\n\nYou can choose between those three commands: ADD - SEARCH - EXIT" <<std::endl;
	std::cout << "\nADD - To add a contact\nSEARCH - To search for a contact\nEXIT - To exit your phone book\n" <<std::endl;
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

void	PhoneBook::search() const
{
	int	i = 0;
	std::string	id;
	std::cout << "\n|" << std::setw(10) << "Id" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" <<std::endl;
	while(i < numContact)
	{
		std::cout << "|" << std::setw(10) << i + 1 << std::flush;
		cont[i].getContact();
		i++;
	}
	std::cout << "\nPlease enter the contact id that you want to see informations: ";
	std::cin >> id;
	try
	{
		if(stoi(id) > 0 and stoi(id) < numContact + 1)
			cont[stoi(id) - 1].getInfo();
		else
			std::cout << "\nPlease enter a valid id.\n" << std::endl;
	}
	catch (const std::invalid_argument &ia)
	{
		std::cerr << "\nInvalid argument: " << ia.what() << "\n\n";
	}
	catch (const std::out_of_range &oor)
	{
		std::cerr << "\nOut of range error: " << oor.what() <<"\n\n";
	}
}

void	PhoneBook::exit()
{
	std::cout << "\nGoodbye :).\n" << std::endl;
	done = 1;
}