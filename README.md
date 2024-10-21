**CPP05**


Imagine une entreprise

Tu travailles dans une entreprise avec plusieurs niveaux de responsabilité. Chaque employé a un grade qui représente son niveau de pouvoir dans l'entreprise. Le grade va de 1 (le plus haut grade, par exemple le PDG) à 150 (le plus bas grade, par exemple un stagiaire).
Dans cette entreprise, il y a des formulaires (comme des contrats ou des documents importants) qu'il faut signer ou exécuter (valider, mettre en action). Mais attention, certains formulaires sont plus importants que d'autres. Seules les personnes avec un grade assez élevé (donc un chiffre bas dans notre système) ont le droit de signer ou d'exécuter ces documents.

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
