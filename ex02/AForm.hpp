/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:51 by tebandam          #+#    #+#             */
/*   Updated: 2024/11/04 10:46:03 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm(std::string name, int gradeToExecute, int gradeToSign);
        virtual ~AForm();
        AForm(AForm const &cpy);
        AForm const & operator=(AForm const &rhs);
    
    public:
        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        void beSigned(const Bureaucrat & bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;

    protected:
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
        class AlreadySigned : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class NotSigned : public std::exception
        {
            public:
                const char* what() const throw();
        };

    private:
        std::string const _name;
        bool _signed;
        const int _gradeToExecute;
        const int _gradeToSign;

};

std::ostream &operator<<(std::ostream &os, const AForm &aform);

#endif