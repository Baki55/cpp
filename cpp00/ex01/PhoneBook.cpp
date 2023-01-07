/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 16:43:56 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/07 18:24:44 by bkhatib          ###   ########.fr       */
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

void	PhoneBook::exit()
{
	std::cout << "Goodbye :)." << std::endl;
	done = 1;
}