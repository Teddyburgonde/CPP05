#include "Form.hpp"
#include "Bureaucrat.hpp"

// std::string const name , const int gradeToExecute, const int gradeToSign
int	main()
{
	/* Create a form with grade too high */
	// {
	// 	try // surveille le code qui pourrait potentiellement generer des exceptions
	// 	{
	// 		Form form("A55", 10, 151); // creation d'un formulaire
	// 		std::cout << f ;// imprime les valeurs de l'objet 
	// 	}
	// 	catch(std::exception &e) // permet de capturer l'exception 
	// 	{
	// 		std::cerr << e.what() << std::endl; // what est une methode de std::exception
	// 	}
	// }
	std::cout << "------------------------------" << std::endl;
	{
		try 
		{
			Bureaucrat Manutea("Manutea", 10);
			std::cout << bureaucrat << std::endl;
			Form form("B12", 9, 151);
			std::cout << form << std::endl;
			Manutea.
		} 
		catch (std::exception &e) 
		{
			std::cerr << e.what() << std::endl;
		}
	}

	// Creer un Bureaucrat , afficher son grade ✅ 
	// Creer une formulaire ❌
	// Mike successfully signed B58 ❌
	// Mike signs B58 ❌
	// Afficher le formulaire avec letat de signed qui a changer ❌


}





























// int main(void)
// {
// 	/* Create a form with grade too high */
// 	{
// 		try
// 		{
// 			Form form0("A99", 0, 5);
// 			std::cout << form0 << std::endl;
// 		}
// 		catch(std::exception &e)
// 		{
// 			std::cerr << e.what() << std::endl;
// 		}
		
// 	}

// 	std::cout << "\n --------------------- \n\n";

// 	/* Create form and sign it without exceptions */
// 	{
// 		try
// 		{
// 			Bureaucrat mike("Mike", 15);
// 			Form form("B58", 20, 45);
// 			std::cout << mike << std::endl;
// 			std::cout << form << std::endl;
// 			mike.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
	
// 	std::cout << "\n --------------------- \n\n";

// 	/* Create form and try to sign it but the grade is not enough */
// 	{
// 		try
// 		{
// 			Bureaucrat jon("Jon", 35);
// 			Form form2("C_303", 20, 45);
// 			std::cout << jon << std::endl;
// 			std::cout << form2 << std::endl;
// 			jon.signForm(form2);
// 			std::cout << form2 << std::endl;
// 		}
// 		catch (std::exception &e)
// 		{
// 			std::cout << e.what() << std::endl;
// 		}
// 	}
// 	return (0);
// }

