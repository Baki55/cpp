/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:56:00 by bkhatib           #+#    #+#             */
/*   Updated: 2024/02/19 10:56:11 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Program must take an expression." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string expression = argv[1];
	RPN rpn;
	rpn.evaluate(expression);
	
	return EXIT_SUCCESS;
}