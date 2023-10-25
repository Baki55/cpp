/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:36:12 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/25 17:30:18 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

	Bureaucrat();

public:
	Bureaucrat( const std::string& name, int grade );
	Bureaucrat( const Bureaucrat& src );
	~Bureaucrat();

	Bureaucrat& operator=( const Bureaucrat& rhs );

	std::string	getName() const;
	int	getGrade() const;

	void	incrementGrade();
	void	decrementGrade();

	void	signForm( Form& form );

	/* ---------------- Exception Classes ---------------- */
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Grade too high"; }
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw() { return "Grade too low"; }
	};

};

std::ostream	&operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif