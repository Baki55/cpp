/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:11:32 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/31 16:59:28 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

bool	isDouble(std::string _str)
{
	if(_str.find( '.' ) == std::string::npos || _str.find( '.' ) == 0 || _str.find( '.' ) == _str.length() - 1)
		return(0);
	int	found = 0;
	int	i = 0;
	while(_str[i] == '-' || _str[i] == '+')
		i++;
	while(i < (int)_str.length())
	{
		if(_str[i] == '.')
			found++;
		if((!std::isdigit(_str[i]) && _str[i] != '.' ) || found > 1)
			return(0);
		i++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	if(argc != 2)
		std::cout << "Bad arguments" << std::endl;
	else
	{
		std::string	str = argv[1];
		if(isDouble(str))
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}
	return(1);
}