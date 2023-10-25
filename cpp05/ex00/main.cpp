/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:33:51 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/25 11:19:44 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Bureaucrat bureaucrat("BK", 1);
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
	}catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}