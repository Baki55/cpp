/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhatib <bkhatib@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 16:42:54 by bkhatib           #+#    #+#             */
/*   Updated: 2023/06/06 16:42:56 by bkhatib          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    const std::string   _target;

    RobotomyRequestForm();

public:
    RobotomyRequestForm( const std::string& target );
    RobotomyRequestForm( const RobotomyRequestForm& src );
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=( RobotomyRequestForm& rhs );

    void        execute( const Bureaucrat& executor ) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP