/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:38:21 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/26 16:43:15 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

#define ROBOTOMY_NAME "Robotomy Request"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	public:
		virtual void	execute(Bureaucrat const &executor) const;
	private: 
		std::string _target;
};


#endif