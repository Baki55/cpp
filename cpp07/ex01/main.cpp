/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:13:31 by bkhatib           #+#    #+#             */
/*   Updated: 2024/01/08 20:47:47 by bkhatib          ###   ########.fr       */
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

void	print_int(int &c)
{
	std::cout << c;
}

void	increment_int(int &c)
{
	std::cout << ++c;
}

void	decrement_int(int &c)
{
	std::cout << --c;
}

int	main(void)
{
	char	array[] = {'a', 'b', 'c', 'd'};
	int	arr[4] = {1, 2, 3, 4};
	
	std::cout << "----------  char  ----------" << std::endl;
	iter(array, 4, print);
	std::cout << std::endl;
	iter(array, 4, increment);
	std::cout << std::endl;
	iter(array, 4, decrement);
	
	std::cout << "----------  int  ----------" << std::endl;
	iter(arr, 4, print_int);
	std::cout << std::endl;
	iter(arr, 4, increment_int);
	std::cout << std::endl;
	iter(arr, 4, decrement_int);
	return(EXIT_SUCCESS);
}