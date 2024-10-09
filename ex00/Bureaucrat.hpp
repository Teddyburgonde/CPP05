#ifndef BUREAUCRAT.HPP
# define BUREAUCRAT.HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        std::string const   _name;
        int _grade;
    class GradeTooHighException : public std::exception
    {
        public:                            // noexcept 
            virtual const char* what() const noexcept
            {
                return "Grade is too hight!";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:                            // noexcept 
            virtual const char* what() const noexcept
            {
                return "Grade is too low!";
            }
    };
};




#endif 