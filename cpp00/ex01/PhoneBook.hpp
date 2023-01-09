/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:49:47 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/09 16:18:35 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	Contact	cont[8];
	int	numContact, n; // n is used to locate where we should add the new contact.
public:
	PhoneBook();
	int	done;
	void	add();
	void	search();
	void	exit();
};

#endif