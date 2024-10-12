#include "Bureaucrat.hpp"
#include <exception>

// int main()
// {
// 	try
// 	{
// 		throw Bureaucrat::GradeTooHighException();
// 	}
// 	catch (const std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl; 
// 	}
//   	return 0;
// }

int	main()
{
	//Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)

	try 
	{
		Bureaucrat b("Pierre", 1);
		b.incrementGrade();
		std::cout << b << std::endl;

	} 
	catch (const std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
































	// try
	// {
	// 	Bureaucrat b("Bureaucrat", 150);

	// 	std::cout << b << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;
	// 	b.incrementGrade();
	// 	std::cout << b << std::endl;
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// return 0;
}