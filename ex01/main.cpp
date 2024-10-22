#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;

	/* A bureaucrat signing a form */
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
	std::cout << std::endl;

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

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << std::endl;

	/* A bureaucrat who wants to sign a document that is already signed */
	{
		try
		{
			Bureaucrat Adrien("Adrien", 20);
			std::cout << Adrien << std::endl;
			Form form("C99", 30, 30);
			std::cout << form << std::endl;
			form.beSigned(Adrien);
			std::cout << form << std::endl;
			std::cout << "test to re-sign" << std::endl;
			form.beSigned(Adrien);
		}
		catch(std::exception &e)
		{
			 std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}





















	// si un bureaucrate veut signer un form deja signer ❌

}
