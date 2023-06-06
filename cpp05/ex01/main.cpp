/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:37:45 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/06 14:47:48 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	try
	{
		Bureaucrat bureaucrat("ash", 2);

		std::cout << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat.getGrade() << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat.getGrade() << std::endl;
		bureaucrat.incrementGrade();
		bureaucrat.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(EXIT_SUCCESS);
}