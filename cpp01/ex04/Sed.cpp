/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:16:04 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/21 16:28:37 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename) : inFile(filename)
{
	this->outFile = filename + ".replace";
}

void	Sed::replace(std::string toFind, std::string toReplaceW)
{
	std::ifstream	ifs(this->inFile);
	if(ifs.is_open())
	{
		std::cout << "The file is succefully opened." << std::endl;
		ifs.close();
	}
	else
	{
		std::cerr << "Unable to open " << this->infile << std::endl;
		exit(EXIT_FAILURE);
}