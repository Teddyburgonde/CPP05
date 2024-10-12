#include "Bureaucrat.hpp"

int	main()
{
	try 
	{
		Bureaucrat b("Galaad", 3);
		b.incrementGrade();
		b.incrementGrade();
		b.incrementGrade();
		std::cout << b << std::endl;
	
	} catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
}