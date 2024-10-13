#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
} 

void Bureaucrat::incrementGrade(void)
{
    if (_grade <= 1)
    {
        throw GradeTooHighException();
    }
    --_grade;
}

void Bureaucrat::decrementGrade(void)
{
    if (_grade >= 150)
    {
        throw  GradeTooLowException();
    }
    ++_grade;
}

std::string const & Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (os);
}

