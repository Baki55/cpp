/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:51:49 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/05 12:46:14 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): name(name), grade(grade)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat &rhs): name(rhs.name), grade(rhs.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	grade = rhs.getGrade();
	return(*this);
}

std::string Bureaucrat::getName() const
{
	return(name);
}

int Bureaucrat::getGrade() const
{
	return(grade);
}

void Bureaucrat::incrementGrade()
{
	if(grade - 1 < 1)
		throw(Bureaucrat::GradeTooHighException());
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if(grade + 1 > 150)
		throw(Bureaucrat::GradeTooLowException());
	grade++;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}