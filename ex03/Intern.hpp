/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:40:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/27 12:48:02 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
	public: /*Canonical form*/
		Intern();
		Intern(Intern const &cpy);
		Intern &operator=(Intern const &rhs);
		~Intern();

	public: /*Method*/
		Form* makeForm(std::string const &nameForm, std::string const &target);
	
	private: /* exception*/
		class FormCreationException : public std::exception
		{
			virtual const char	*what() const throw();
		};
};

#endif