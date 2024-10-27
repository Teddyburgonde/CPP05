/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:45:37 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/27 12:46:19 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

enum FormType {
    ROBOTOMY_REQUEST,
    SHRUBBERY_CREATION,
    PRESIDENTIAL_PARDON,
    UNKNOWN_FORM
};


Intern::Intern()
{
	
};

Intern::Intern(Intern const &cpy)
{
	*this = cpy;		
};

Intern & Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}


Intern::~Intern()
{
		
};

FormType getFormType(const std::string &nameForm) 
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

Form* Intern::makeForm(std::string const & nameForm, std::string const &target)
{
	Form* newForm;
	newForm = Form::makeForm(nameForm, target);
	if (!newForm)
				
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
		case UNKNOWN_FORM:
		default:
			std::cout << "The form does not exist." << std::endl;
			return nullptr;
	}
	std::cout << "Intern creates " << nameForm << std::endl;
	return newForm;
};