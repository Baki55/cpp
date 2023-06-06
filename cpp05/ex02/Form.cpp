/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:59:29 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/06 14:59:33 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExec): name(name), isSigned(0), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
	if(gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if(gradeToSign > 150)
		throw Form::GradeTooLowException();
	if(gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if(gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &rhs): name(rhs.getName()), isSigned(rhs.getIsSigned()), gradeToSign(rhs.getGradeToSign()), gradeToExec(rhs.getGradeToExec()) {}

Form &Form::operator=(const Form &rhs)
{
	name = rhs.getName();
	isSigned = rhs.getIsSigned();
	gradeToSign = rhs.getGradeToSign();
	gradeToExec = rhs.getGradeToExec();
	return(*this);
}
std::string Form::getName() const
{
	return(name);
}

bool Form::getIsSigned() const
{
	return(isSigned);
}

int Form::getGradeToSign() const
{
	return(gradeToSign);
}

int Form::getGradeToExec() const
{
	return(gradeToExec);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if(gradeToSign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
		isSigned = 1;
}

std::ostream &operator<<(std::ostream &o, const Form &rhs)
{
	o << "------------- Form Info -------------" << std::endl;
	o << "Form name: " << rhs.getName() << std::endl
	<< "Grade to sign: " << rhs.getGradeToSign() << std::endl
	<< "Grade to execute: " << rhs.getGradeToExec();
	return(o);
}