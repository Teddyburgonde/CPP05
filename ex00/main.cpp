#include "Bureaucrat.hpp"



int main()
{
	try
	{
		throw Bureaucrat::GradeTooHighException();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}
  	return 0;
}