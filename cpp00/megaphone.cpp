/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:21:13 by bkhatib           #+#    #+#             */
/*   Updated: 2022/12/16 15:51:19 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i, j;
	
	if (argc == 1)
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
				std::cout << argv[i][j];
		}
	}
	return (EXIT_SUCCESS);
}