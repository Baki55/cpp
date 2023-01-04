/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:54:31 by bkhatib           #+#    #+#             */
/*   Updated: 2023/01/04 15:06:19 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string s1, std::string s2, std::string s3, std::string s4, std::string s5)
{
	first_name = s1;
	last_name = s2;
	nickname = s3;
	phone_number = s4;
	darkest_secret = s5;
}