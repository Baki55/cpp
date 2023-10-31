/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:11:32 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/31 16:01:51 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

bool isFloat( std::string myString ) {
    std::istringstream iss(myString);
    float f;
    iss >> std::noskipws >> f; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail(); 
}

int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout << "Bad arguments" << std::endl;
	else
	{
		std::string	str = argv[1];
		if(isFloat(str))
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	return(1);
}