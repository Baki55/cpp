/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:28:51 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/11 15:31:23 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class	Contact
{
	std::string	firstName, lastName, nickname, phoneNumber, darkestSecret;
public:
	Contact();
	void	setContact(std::string, std::string, std::string, std::string, std::string);
	void	getContact(void);
	void	getInfo(void);
	std::string	getStr(std::string str) const;
};

#endif