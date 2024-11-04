/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:49:33 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 10:48:28 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm(ROBOTOMY_NAME, 72, 45), _target(target)
{
	std::srand((unsigned) time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : AForm(cpy)
{
	*this = cpy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
		
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	int	success;
	if (this->getIsSigned() == false)
		throw NotSigned();
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	success = std::rand() % 2;
	if (success)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}
