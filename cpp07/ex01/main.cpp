/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:13:31 by bkhatib           #+#    #+#             */
/*   Updated: 2023/11/13 18:30:28 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	print(char &c)
{
	std::cout << c;
}

void	increment(char &c)
{
	std::cout << ++c;
}

void	decrement(char &c)
{
	std::cout << --c;
}

int	main(void)
{
	char	array[] = {'a', 'b', 'c', 'd'};

	iter(array, 4, print);
	std::cout << std::endl;
	iter(array, 4, increment);
	std::cout << std::endl;
	iter(array, 4, decrement);
	return(EXIT_SUCCESS);
}