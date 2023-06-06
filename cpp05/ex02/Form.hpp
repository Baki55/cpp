/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:49:51 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/06 12:14:59 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string name;
	bool isSigned;
	int gradeToSign, gradeToExec;
	Form();
public:
	Form(const std::string name, int gradeToSign, int gradeToExec);
	Form(const Form &rhs);
	~Form();
	
	Form &operator=(const Form &rhs);

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExec() const;

	void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw() {return("Grade to high!");}
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what() const throw() {return("Grade to low!");}
	};
};

std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif