/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:52:14 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/05 12:47:18 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int	grade;
	Bureaucrat();
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(Bureaucrat &rhs);
	~Bureaucrat();
	Bureaucrat &operator=(const Bureaucrat &rhs);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw() {return("Grade too high!");}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw() {return("Grade too low!");}
	};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif