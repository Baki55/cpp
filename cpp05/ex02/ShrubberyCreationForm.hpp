/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:43:06 by bkhatib           #+#    #+#             */
/*   Updated: 2023/10/26 14:47:18 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

private:
    const std::string   _target;

    ShrubberyCreationForm();

public:
    ShrubberyCreationForm( const std::string& target );
    ShrubberyCreationForm( const ShrubberyCreationForm& src );
    ~ShrubberyCreationForm();

    ShrubberyCreationForm&  operator=( ShrubberyCreationForm& rhs );

    void        execute( const Bureaucrat& executor ) const;

};

#endif // SHRUBBERYCREATIONFORM_HPP