/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/23 11:52:28 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm()
{
    
};

AForm::AForm(AForm const &cpy) :_name(cpy._name), _signed(cpy._signed), _gradeToExecute(cpy._gradeToExecute), _gradeToSign(cpy._gradeToSign)
{
   *this = cpy;
};

AForm const & AForm::operator=(const AForm &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return (*this);
}

AForm::AForm(std::string const name , const int gradeToExecute, const int gradeToSign) : _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();     
}
std::string const & AForm::getName() const
{
    return (_name);
}

bool AForm::getIsSigned() const
{
    return (_signed);
}

int AForm::getGradeToExecute() const
{
    return (_gradeToExecute);        
}

int AForm::getGradeToSign() const
{
    return (_gradeToSign);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
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

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream & operator<<(std::ostream &os, const AForm &aform)
{
	os << "The contract " << aform.getName();
    if (aform.getIsSigned() == true)
        os << " is signed." << std::endl;
    else {
        os << " is not signed." << std::endl;
    }
	os << "To execute this contract you have to be a grade " << aform.getGradeToExecute() << std::endl
    << "and to sign it you have to be a grade " << aform.getGradeToSign() << "." << std::endl;
	return (os);
}
