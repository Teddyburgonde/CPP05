#include "Form.hpp"
#include "Bureaucrat.hpp"

// std::string const name , const int gradeToExecute, const int gradeToSign
int	main()
{
	/* Create a form with grade too high */
	{
		try // surveille le code qui pourrait potentiellement generer des exceptions
		{
			Form f("Document A", 10, 1); // creation d'un formulaire
			
			std::cout << f.getGradeToExecute() << std::endl;
			std::cout << f.getGradeToSign() << std::endl;
			std::cout << f << std::endl; // imprime les valeurs de l'objet 
		}
		catch(std::exception &e) // permet de capturer l'exception 
		{
			std::cerr << e.what() << std::endl; // what est une methode de std::exception
		}
	}
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

