/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:45:37 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 11:00:31 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern() {};

Intern::Intern(Intern const &cpy)
{
	*this = cpy;		
};

Intern & Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern() {};

AForm* Intern::makeForm(std::string const & nameForm, std::string const &target)
{
	AForm* newForm;;
	FormType formType = strToFromType(nameForm);
				
	switch (formType) 
	{
		case ROBOTOMY_REQUEST:
			newForm = new RobotomyRequestForm(target);
			break;
		case SHRUBBERY_CREATION:
			newForm = new ShrubberyCreationForm(target);
			break;
		case PRESIDENTIAL_PARDON:
			newForm = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::FormCreationException();
	}
	std::cout << "Intern creates " << nameForm << std::endl;
	return newForm;
};

const char	*Intern::FormCreationException::what()	const throw()
{
	return ("This type of form isn't available.");
}

FormType strToFromType(const std::string &nameForm) 
{
    if (nameForm == "robotomy request") 
		return ROBOTOMY_REQUEST;
    else if (nameForm == "shrubbery creation") 
		return SHRUBBERY_CREATION;
    else if (nameForm == "presidential pardon") 
		return PRESIDENTIAL_PARDON;
    else 
		return UNKNOWN_FORM;
}