/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:47:13 by bkhatib           #+#    #+#             */
/*   Updated: 2023/03/06 19:04:13 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	harl;
	std::string	input;

	do
	{
		std::cout << "Choose a level: ";
		std::cin >> input;
		harl.complain(input);
	} while(input.compare("exit"));
	
	return (0);
}