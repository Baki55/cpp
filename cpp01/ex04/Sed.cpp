/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:16:04 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/21 16:58:56 by bkhatib          ###   ########.fr       */
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
		std::string	content;
		if(std::getline(ifs, content, '\0'))
		{
			std::ofstream	ofs(this->outFile);
			size_t	found = content.find(toFind);
			while(found != std::string::npos)
			{
				content.erase(found, toFind.length());
				content.insert(found, toReplaceW);
				found = content.find(toFind);
			}
			ofs << content;
			ofs.close();
			ifs.close();
		}
		else
			std::cerr << "Unable to read the file" << std::endl;
	}
	else
	{
		std::cerr << "Unable to open " << this->inFile << std::endl;
		exit(EXIT_FAILURE);
	}
}