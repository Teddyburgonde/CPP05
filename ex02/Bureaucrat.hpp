/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:39:26 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/26 17:10:45 by tebandam         ###   ########.fr       */
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
	public: /* Canonical form */
		Bureaucrat();
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(Bureaucrat const &cpy);
		Bureaucrat const & operator=(Bureaucrat const &rhs);
		~Bureaucrat();
    
	
	public: /*Getters */
        std::string const &getName() const;
        int getGrade() const;

	public: /* Methodes */
		void	gradeUp(void);
		void	signForm(AForm &aform);
		void	executeForm(AForm const & aform);

	public: /* Exceptiions */
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

	private: /* Variables */
    	std::string   _name;
    	int _grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif 