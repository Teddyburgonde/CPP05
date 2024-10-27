/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:25:51 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/27 15:33:05 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    public:
        AForm();
        AForm(std::string const &name , const int gradeToExecute, const int gradeToSign);
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
        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        void beSigned(const Bureaucrat & bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
    // Initialise signed 
    private:
        std::string const _name;
        const int _gradeToExecute;
        const int _gradeToSign;
        bool _signed;

};

std::ostream &operator<<(std::ostream &os, const AForm &aform);

#endif