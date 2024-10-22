#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
} 

std::string const & Bureaucrat::getName() const
{
    return (_name);
}

void	Bureaucrat::signForm(Form &form)
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    } catch (std::exception &e) 
    {
        std::cout << this->_name << " cannot sign " << form.getName() << " because: " << e.what() << std::endl;
    }
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
    os << bureaucrat.getName() << ", is a bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (os);
}

