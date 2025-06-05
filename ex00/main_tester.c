#include "Bureaucrat.hpp"
#include <iostream>
#include <cassert>

#include "Bureaucrat.hpp"
#include <iostream>
#include <cassert>
#include <sstream>

int main() {
    // ✅ Test 1 : Création d'un Bureaucrat valide
    Bureaucrat b1("Alice", 42);
    assert(b1.getName() == "Alice");
    assert(b1.getGrade() == 42);
    std::cout << "\033[0;32mTest 1 passed\033[0m\n";

    // Test 2 - operator<<
	std::stringstream ss;
	ss << b1; // On envoie la sortie dans ss
	std::string output = ss.str();
	assert(output == "Alice, bureaucrat grade 42.");
	std::cout << "\033[0;32mTest 2 passed\033[0m\n";

    // ✅ Test 3 : Incrémentation normale
    b1.incrementGrade(); // 42 -> 41
    assert(b1.getGrade() == 41);
    std::cout << "\033[0;32mTest 3 passed\033[0m\n";

    // ✅ Test 4 : Décrémentation normale
    b1.decrementGrade(); // 41 -> 42
    assert(b1.getGrade() == 42);
    std::cout << "\033[0;32mTest 4 passed\033[0m\n";

    // ❌ Test 5 : Incrémenter un grade=1 doit lever GradeTooHighException
    Bureaucrat b4_test5("Dylan", 1);
    try {
        b4_test5.incrementGrade();
        assert(false); // Ne doit pas atteindre cette ligne
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << "\033[0;32mTest 5 passed (exception attendue)\033[0m\n";
    }

    // ❌ Test 6 : Créer un Bureaucrat avec grade trop bas (>150) doit lever GradeTooLowException
    try {
        Bureaucrat b3("Charlie", 151);
        assert(false); // Ne doit pas atteindre cette ligne
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << "\033[0;32mTest 6 passed (exception attendue)\033[0m\n";
    }

    // ❌ Test 7 : Incrémenter un grade=1 doit lever GradeTooHighException
    Bureaucrat b4_test7("Dylan", 1);
    try {
        b4_test7.incrementGrade();
        assert(false); // Ne doit pas atteindre cette ligne
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << "\033[0;32mTest 7 passed (exception attendue)\033[0m\n";
    }

    // ❌ Test 8 : Décrémenter un grade=150 doit lever GradeTooLowException
    Bureaucrat b5("Eve", 150);
    try {
        b5.decrementGrade();
        assert(false); // Ne doit pas atteindre cette ligne
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << "\033[0;32mTest 8 passed (exception attendue)\033[0m\n";
    }

    // ✅ Test 9 : Constructeur de copie
    Bureaucrat b6("Frank", 20);
    Bureaucrat b7(b6);
    assert(b7.getName() == "Frank");
    assert(b7.getGrade() == 20);
    std::cout << "\033[0;32mTest 9 passed\033[0m\n";

    // ✅ Test 10 : Opérateur d’affectation (nom inchangé, grade mis à jour)
    Bureaucrat b8("Gina", 50);
    b8 = b6;
    assert(b8.getName() == "Gina"); // nom inchangé (const)
    assert(b8.getGrade() == 20);    // grade mis à jour
    std::cout << "\033[0;32mTest 10 passed\033[0m\n";

    std::cout << "\n\033[0;32mTous les tests terminés avec succès !\033[0m\n";
    return 0;
}
