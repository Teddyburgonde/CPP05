/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:49:33 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/26 14:55:51 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name) :AForm("default", 72, 45)
{
		
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("Shruberry Creation", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy)
{
	*this = cpy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
		
}


void	RobotomyRequestForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	int	success; // boolean 

	srand((unsigned) time(NULL)); // initialisation du generateur 
	success = rand() % 2; // genere un nombre aleatoire entre 0 et 1 et le stock dans success
	(void)bureaucrat; // ignore bureaucrat 
	if (success) // l'operation est reussi
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else // operation a echoue 
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}



