/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:51 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/23 15:13:59 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
    public:
        virtual ~AForm(); // destructeur en virtual
        AForm(AForm const &cpy);
        AForm const & operator=(AForm const &rhs);

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
        AForm(std::string name, int gradeToExecute, int gradeToSign);

    public:
        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        void beSigned(const Bureaucrat & bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;

    private:
        std::string const _name;
        bool _signed;
        const int _gradeToExecute;
        const int _gradeToSign;

};

std::ostream &operator<<(std::ostream &os, const AForm &aform);

#endif