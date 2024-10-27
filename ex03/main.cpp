/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/27 15:20:34 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <exception>

int	main()
{
    Intern someRandomIntern;
    Bureaucrat Mathieu("Mathieu", 5);
    AForm* rrf;

    // Robotomy Request
    std::cout << " - New form" << std::endl;

    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Mathieu.signForm(*rrf);
        Mathieu.executeForm(*rrf);
        std::cout << std::endl << *rrf << std::endl;
        delete rrf;
    }

    std::cout << " - New form" << std::endl;
    
    // Shruberry Creation
    {
        rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
        Mathieu.signForm(*rrf);
        Mathieu.executeForm(*rrf);
        std::cout << std::endl << *rrf << std::endl;
        delete rrf;
    }
    
    std::cout << " - New form" << std::endl;
    
    // Presidential Pardon
    {
        rrf = someRandomIntern.makeForm("presidential pardon", "Manu");
        Mathieu.signForm(*rrf);
        Mathieu.executeForm(*rrf);
        std::cout << std::endl << *rrf << std::endl;
        delete rrf;
    }
    
    std::cout << " - New form" << std::endl;
    
    // Salary Increase (Error)
    {
        try {
            rrf = someRandomIntern.makeForm("Salary increase", "Intern");
        } catch (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }    
    }
}
