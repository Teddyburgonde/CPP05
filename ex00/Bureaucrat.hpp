#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
    	std::string const   _name;
    	int _grade;
	class GradeTooHighException : public std::exception
	{
    	public:
        	virtual const char* what() const noexcept
			{
				return "Grade too high";
        	}
	};
	class GradeTooLowException : public std::exception
	{
    	 public:
            virtual const char* what() const noexcept
            {
				return "Grade too low";
            }
    };

    public :
		Bureaucrat(std::string name, int grade);
        std::string const &getName() const;
        int getGrade() const;
		void incrementGrade(void);
		void decrementGrade(void);
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif 