/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:18:55 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/06 16:22:28 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat("bk", 1);

        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        // bureaucrat.decrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}