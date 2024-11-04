#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &cpy);
		Bureaucrat & operator=(Bureaucrat const &rhs);


    public:
        std::string const &getName() const;
        int getGrade() const;
		void incrementGrade(void);
		void decrementGrade(void);

	private:
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

	private:
    	std::string const   _name;
    	int _grade;

	private:	
		Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif