#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade too high";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Grade too low";
				}
		};
    public:
		Bureaucrat(std::string name, int grade);
        std::string const &getName() const;
        int getGrade() const;
		void incrementGrade(void);
		void decrementGrade(void);
	private:
    	std::string const   _name;
    	int _grade;
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif 