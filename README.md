**CPP05**

**ex00**

- Les classes d'exceptions n'ont pas besoin de la forme Canonique.

**Les exceptions**
- Une exception en programmation est un mécanisme qui permet de gérer les erreurs ou les situations inattendues de manière propre et contrôlée.

```c
include <exception>

int	main()
{
	try
	{
        // code qui pourrait ou pas generer une exception 
	}
	catch (const std::exception &e)
	{
		// capture et gestion de l'exception 
	}
}
```

- virtual const char* what() const throw() cela veut dire que la fonction what return une chaine de caractere constant.
- class GradeTooHighException : public std::exception
{
public:
    virtual const char* what() const noexcept
    {
        return "Grade is too high!";
    }
};

**ex01**

```c
int	main()
{
	try // surveille le code qui pourrait potentiellement generer des exceptions
	{
		Form f("Document A", 10, 1); // creation d'un formulaire
		std::cout << f << std::endl; // imprime les valeurs de l'objet 
	} 
	catch(std::exception &e) // permet de capturer l'exception 
	{
		std::cerr << e.what() << std::endl; // what est une methode de std::exception
	}
}
```
❌
✅
