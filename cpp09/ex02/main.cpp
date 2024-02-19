/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:59:13 by bkhatib           #+#    #+#             */
/*   Updated: 2024/02/19 10:59:16 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		std::cerr << "Program must take a sequence." << std::endl;
		exit(EXIT_FAILURE);
	}
	PmergeMe pmerge;
	std::vector<std::string> sequence;
    for (int i = 1; i < argc; ++i) {
        sequence.push_back(argv[i]);
    }
	pmerge.run(sequence);
	
	return EXIT_SUCCESS;
}