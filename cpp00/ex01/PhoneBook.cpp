/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:43:56 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/07 18:44:16 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	numContact = 0;
	done = 0;
	std::cout << "Welcome in your phone book.\nYour phone book is actually empty but you can ADD a contact whenever you want :)." <<std::endl;
	std::cout << "You can then SEARCH in your phone book or EXIT when you're done." <<std::endl;
	std::cout << "You can choose now between those three command:" <<std::endl;
	std::cout << "1 - ADD\n2 - SEARCH\n3 - EXIT" <<std::endl;
}

void	PhoneBook::add()
{
	std::string	fN, lN, nN, pN, dS;
	std::cout << "Enter the first name:" <<std::endl;
	std::cin >> fN;
	std::cout << "Enter the last name:" <<std::endl;
	std::cin >> lN;
	std::cout << "Enter the nickname:" <<std::endl;
	std::cin >> nN;
	std::cout << "Enter the phone number:" <<std::endl;
	std::cin >> pN;
	std::cout << "Enter the darkest secret:" <<std::endl;
	std::cin >> dS;
	if(numContact == 7)
		cont[0].setContact(fN, lN, nN, pN, dS);
	else
		numContact++;
}

void	PhoneBook::exit()
{
	std::cout << "Goodbye :)." << std::endl;
	done = 1;
}