/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/22 20:14:59 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form()
{
    
};

Form::Form(Form const &cpy) :_name(cpy._name), _signed(cpy._signed), _gradeToExecute(cpy._gradeToExecute), _gradeToSign(cpy._gradeToSign)
{
   *this = cpy;
};

Form const & Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return (*this);
}

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
    if (_signed)
    {
        std::cout << "Form " << _name << " is already signed." << std::endl;
        return;
    }
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
    {
        throw GradeTooLowException();
    }
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
	os << "The contract " << form.getName();
    if (form.getIsSigned() == true)
        os << " is signed." << std::endl;
    else {
        os << " is not signed." << std::endl;
    }
	os << "To execute this contract you have to be a grade " << form.getGradeToExecute() << std::endl
    << "and to sign it you have to be a grade " << form.getGradeToSign() << "." << std::endl;
	return (os);
}
