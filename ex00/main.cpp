/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:30:48 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 11:39:21 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		try 
		{
			Bureaucrat b("Galaad", 3);
			b.incrementGrade();
			b.incrementGrade();
			std::cout << b << std::endl;
			b.incrementGrade();
		} 
		catch (std::exception &e) 
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		try 
		{
			Bureaucrat b("Galaad", 150);
			b.decrementGrade();
			std::cout << b << std::endl;
		} 
		catch (std::exception &e) 
		{
			std::cout << e.what() << std::endl;
		}
	}
}