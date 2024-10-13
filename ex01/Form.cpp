/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/13 18:27:26 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, bool isSigned, int gradeToExecute, int gradeToSign) : _name(name), _signed(isSigned), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();     
}
std::string const &getName() const
{
    return (_name);
}

void Form::incrementGrade(void)
{
    if (_grade <= 1)
    {
        throw GradeTooHighException();
    }
    --_grade;
}

void Form::decrementGrade(void)
{
    if (_grade >= 150)
    {
        throw  GradeTooLowException();
    }
    ++_grade;
}