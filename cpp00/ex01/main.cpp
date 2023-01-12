/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:08:16 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/12 15:35:38 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	myPhoneBook;
	std::string cmd;
	
	while (myPhoneBook.done == 0)
	{
		std::cout << "Choose a command: ";
		std::cin >> cmd;
		if(cmd == "ADD")
			myPhoneBook.add();
		else if(cmd == "SEARCH")
			myPhoneBook.search();
		else if(cmd == "EXIT")
			myPhoneBook.exit();
		else
			std::cout << "\nPlease enter a valid command.\n" << std::endl;
	}
	return(1);
}