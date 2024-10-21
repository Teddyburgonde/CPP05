/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/21 19:04:08 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name , const int gradeToExecute, const int gradeToSign) : _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();     
}
std::string const & Form::getName() const
{
    return (_name);
}

bool Form::getIsSigned() const
{
    return (_signed);
}

int Form::getGradeToExecute() const
{
    return (_gradeToExecute);        
}

int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() >= _gradeToSign)
        _signed = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream & operator<<(std::ostream &os, const Form &form)
{
	os << "The contract " << form.getName() << " , signed: " << form.getIsSigned() << ", " << std::endl
	<< "to execute this contract you have to be a grade " << form.getGradeToExecute() << std::endl
    << "and to sign it you have to be a grade " << form.getGradeToSign() << "." << std::endl;
	return (os);
}
