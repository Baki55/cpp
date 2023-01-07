/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:08:16 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/07 18:13:21 by bkhatib          ###   ########.fr       */
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
		std::cin >> cmd;
		if(cmd == "ADD")
			myPhoneBook.add();
		else if(cmd == "SEARCH")
			myPhoneBook.search();
		else if(cmd == "EXIT")
			myPhoneBook.exit();
		else
			std::cout << "Please enter a valid command." << std::endl;
	}
	return(1);
}