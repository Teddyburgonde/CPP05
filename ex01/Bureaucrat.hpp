/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:26 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 09:55:01 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public :
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &cpy);
		Bureaucrat & operator=(Bureaucrat const &rhs);
    
	public:
        std::string const &getName() const;
        int getGrade() const;
		void	signForm(Form &form);
	
	private:
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
    	std::string const   _name;
    	int _grade;

	private:
		Bureaucrat();
	
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif 