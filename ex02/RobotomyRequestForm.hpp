/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:38:21 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/24 10:35:22 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		RobotomyRequestForm(std::string const &target); // ???

	public: 
		std::string _target;
};


#endif