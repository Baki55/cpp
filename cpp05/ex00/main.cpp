/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:37:45 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/05 12:38:57 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
	try
	{
		Bureaucrat bureaucrat("ash", 1);

		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
		//bureaucrat.decrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(EXIT_SUCCESS);
}