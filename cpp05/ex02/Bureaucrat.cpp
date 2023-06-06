/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:51:49 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/06 15:36:42 by bkhatib          ###   ########.fr       */
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

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void executeForm(const Form &form) const
{
	try
	{
		form.execute( *this );
	}
	catch(std::exception &e)
	{
		std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}