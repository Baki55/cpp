/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:30:43 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/17 17:10:06 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Please enter 3 arguments" << std::endl;
	else
	{
		std::ifstream	ifs(argv[1]);
		if(ifs.is_open())
			std::cout << "File opened" << std::endl;
		else
			std::cout << "Error opening file" << std::endl;
	}
	return(0);
}