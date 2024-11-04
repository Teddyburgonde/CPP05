/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:40:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 09:35:17 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

enum FormType {
    ROBOTOMY_REQUEST,
    SHRUBBERY_CREATION,
    PRESIDENTIAL_PARDON,
    UNKNOWN_FORM
};

class Intern
{
	public:
		Intern();
		Intern(Intern const &cpy);
		Intern &operator=(Intern const &rhs);
		~Intern();

	public:
		AForm* makeForm(std::string const & nameForm, std::string const &target);
	
	private:
		class FormCreationException : public std::exception
		{
			virtual const char	*what() const throw();
		};
};

FormType strToFromType(const std::string &nameForm);

#endif