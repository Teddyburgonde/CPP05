/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:38:34 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/26 17:13:24 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade) {}

Bureaucrat::~Bureaucrat()
{
    
};
Bureaucrat::Bureaucrat(Bureaucrat const &cpy)
{
    *this = cpy;
}

Bureaucrat const & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
        this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
};


std::string const & Bureaucrat::getName() const
{
    return (_name);
}


int Bureaucrat::getGrade() const
{
    return (_grade);
}


void Bureaucrat::gradeUp(void)
{
    if (_grade < 1)
        throw GradeTooHighException();
    if (_grade > 150)
        throw GradeTooLowException();
} 

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

void	Bureaucrat::signForm(AForm &aform)
{
    try 
    {
        aform.beSigned(*this);
        std::cout << this->_name << " signs " << aform.getName() << std::endl;
    } catch (std::exception &e) 
    {
        std::cout << this->_name << " cannot sign " << aform.getName() << " because: " << e.what() << std::endl;
    }
}

void	Bureaucrat::executeForm(AForm const &aform)
{
	try
	{
		aform.execute(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot execute " << aform.getName() << " because: " << e.what() << std::endl;
	}
}



std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", is a bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (os);
}

