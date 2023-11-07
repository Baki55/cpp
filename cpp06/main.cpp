/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:11:32 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/31 21:57:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << "Usage: ./convert numberToConvert" << std::endl;
		return(EXIT_FAILURE);
	}
	try
	{
		ScalarConverter	sC;
		std::string str = argv[1];
		sC.convert(str);
		std::cout << sC;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return(EXIT_SUCCESS);
}