/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:26 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/26 15:21:23 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <fstream>

class Form;
class AForm;
class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		~Bureaucrat();
		Bureaucrat const & operator=(Bureaucrat const &rhs);
    
	


	
	public:
        std::string const &getName() const;
        int getGrade() const;
		void	signForm(Form &form);
		void	executeForm(AForm const & form); // add
	
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
    	std::string const   _name;
    	int _grade;
	
	
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif 