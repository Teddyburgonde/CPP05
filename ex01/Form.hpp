/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:51 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/20 16:43:43 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
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
    public:
        Form(std::string name, bool isSigned, int gradeToExecute, int gradeToSign);

    public:
        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        void beSigned(const Bureaucrat & bureaucrat);

    private:
        std::string const _name;
        bool _signed;
        const int _gradeToExecute;
        const int _gradeToSign;

};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif