/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:03:53 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/26 19:32:28 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Creation", 25, 5), _target("Default")
{
	
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("Presidential Creation", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : AForm(cpy)
{
	*this = cpy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}