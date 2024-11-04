/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:30:48 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 09:54:03 by tebandam         ###   ########.fr       */
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

			// 


		
	}
}