/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:42:36 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/06 16:42:39 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;

    PresidentialPardonForm();

public:
    PresidentialPardonForm( const std::string& target );
    PresidentialPardonForm( const PresidentialPardonForm& src );
    ~PresidentialPardonForm();

    PresidentialPardonForm& operator=( const PresidentialPardonForm& rhs );
    
    void execute( const Bureaucrat& executor ) const;
};

#endif // PRESIDENTIALPARDONFORM_HPP