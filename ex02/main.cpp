/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 11:57:39 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	/*Creation of 3 bureaucrats and 3 forms */
	{
		Bureaucrat henri("Henri", 1);
		Bureaucrat john("John", 150);
		Bureaucrat gaetan("Gaetan", 1);
		
		ShrubberyCreationForm shrubbery("Home");
		RobotomyRequestForm robotomy("Robot");
		PresidentialPardonForm pardon("Homer");
		
		try 
		{
			/*Execute the forms */
			std::cout << henri << std::endl;
			std::cout << john << std::endl;
			std::cout << gaetan << std::endl;

			std::cout << std::endl;

			std::cout << shrubbery << std::endl;
			std::cout << robotomy << std::endl;
			std::cout << pardon << std::endl;

			henri.signForm(shrubbery);
			henri.executeForm(shrubbery);
			john.executeForm(robotomy);
			gaetan.signForm(pardon);
			gaetan.executeForm(pardon);
		} 
		catch (std::exception &e) 
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	/*Form not signe */
	{
		Bureaucrat matheo("Matheo", 1);
		ShrubberyCreationForm shrubbery("Home");
		matheo.executeForm(shrubbery);
	}
	
	/*Form signed */
	{
		Bureaucrat matheo("Matheo", 1);
		ShrubberyCreationForm shrubbery("Home");
		matheo.signForm(shrubbery);
		matheo.executeForm(shrubbery);
	}
}
