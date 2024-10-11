**ex00**

- Les classes d'exceptions n'ont pas besoin de la forme Canonique.

.hpp
class Bureaucrat
private :
	std::string const _name;
	int grade;
- grade valid ? de 1 a 150.
**Les exceptions**

- Une exception en programmation est un mécanisme qui permet de gérer les erreurs ou les situations inattendues de manière propre et contrôlée.
- Pour les grades utiliser les exceptions. 
- On doit intercepter les exceptions qu'on leve dans un bloc de try-catch
- La signiatures des exceptions ce met dans le main. on rajoute : public std::exception
- What ???
- Bureaucrat::GradeTooHighException
- Bureaucrat::GradeTooLowException.
- virtual const char* what() const throw() cela veut dire que la fonction what return une chaine de caractere constant.
- include <exception>
- class GradeTooHighException : public std::exception
{
public:
    virtual const char* what() const noexcept
    {
        return "Grade is too high!";
    }
};
- noexcept signifie que la fonction ne levera pas d'exception supplémentaire.




.cpp
- return "message"
- What ???







❌
✅
