#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main()
{

	/* A bureaucrat signing a form */

	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;
	{
		try 
		{

			Bureaucrat Manutea("Manutea", 15);
			std::cout << Manutea << std::endl;
			Form form("A12", 20, 45);
			std::cout << form << std::endl;
			form.beSigned(Manutea);
			std::cout << form << std::endl;
		} 
		catch (std::exception &e) 
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "------------------------------" << std::endl;

	/* A bureaucrat who can't sign the form */	
	{
		try 
		{
			Bureaucrat Matthieu("Matthieu", 50);
			std::cout << Matthieu << std::endl;
			Form form("B126", 19, 20);
			std::cout << form << std::endl;
			form.beSigned(Matthieu);
			std::cout << form << std::endl;
		} 
		catch (std::exception &e) 
		{
			std::cerr << "Matthieu cannot sign the form because " << e.what() << std::endl;
		}
	}


	// si un bureaUcrate n'a pas le grade pour signer le form❌
	// si un bureaucrate veut signer un form deja signer ❌

}
