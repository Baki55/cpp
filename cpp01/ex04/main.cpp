/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:30:43 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/21 16:43:28 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./Sed <filename> <str_to_find> <str_to_replace_with>" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		Sed	mySed(argv[1]);
		mySed.replace(argv[2], argv[3]);
	}
	return(EXIT_SUCCESS);
}