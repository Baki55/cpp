/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:43:56 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/10 15:50:12 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	numContact = 0;
	n = 7;
	done = 0;
	std::cout << "Welcome in your phone book.\nYou can choose between those three commands:" <<std::endl;
	std::cout << "ADD - To add a contact\nSEARCH - To search for a contact\nEXIT - To exit your phone book" <<std::endl;
}

void	PhoneBook::add()
{
	std::string	fN, lN, nN, pN, dS;
	std::cout << "Enter the first name: ";
	std::cin >> fN;
	std::cout << "Enter the last name: ";
	std::cin >> lN;
	std::cout << "Enter the nickname: ";
	std::cin >> nN;
	std::cout << "Enter the phone number: ";
	std::cin >> pN;
	std::cout << "Enter the darkest secret: ";
	std::cin >> dS;
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
	int	i = 0;
	std::cout << "|" << std::setw(10) << "Id" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" <<std::endl;
	while(i < numContact)
	{
		std::cout << "|" << std::setw(10) << i + 1 << std::flush;
		cont[i].getContact();
		i++;
	}
	std::cout << "Search done." <<std::endl;
}

void	PhoneBook::exit()
{
	std::cout << "Goodbye :)." << std::endl;
	done = 1;
}