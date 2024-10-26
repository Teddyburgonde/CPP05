/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:38:17 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/26 18:53:27 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shruberry Creation", 145, 137), _target("Default")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("Shruberry Creation", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : AForm(cpy)
{
	*this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
	{
		std::cerr << "Contract not signed " << std::endl;
		return ;
	}
	else if (executor.getGrade() > this->getGradeToExecute())
	{
		throw (Bureaucrat::GradeTooLowException());
	}
	std::ofstream outfile((this->_target + "_shruberry").c_str());

outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠖⠒⠢⣄⣀⡀⣀⣀⠀⡠⠔⠒⠒⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠖⠒⠢⣄⣀⡀⣀⣀⠀⡠⠔⠒⠒⢤⡀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⡇⠀⠀⠀⠁⠠⡋⠀⠀⠙⠦⠀⠀⠀⠀⣧⠤⣀⠀⠀⠀⠀⠀⠀⠀⢀⡴⡇⠀⠀⠀⠁⠠⡋⠀⠀⠙⠦⠀⠀⠀⠀⣧⠤⣀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⡠⠖⠊⠑⠲⣄⣀⣠⠖⠘⠛⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⢸⠇⠀⠀⠀⠀⠀⡠⠖⠊⠑⠲⣄⣀⣠⠖⠘⠛⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⢸⠇" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⣸⣇⡀⠀⠀⠈⠁⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠋⠲⣄⠀⠀⠀⣸⣇⡀⠀⠀⠈⠁⠀⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠋⠲⣄" << std::endl;
outfile << "⠀⠀⠀⠀⣠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠂⠀⣠⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠂" << std::endl;
outfile << "⠀⠀⠀⢀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⢱⠀⠀⠀⠀⠀⠀⠀⠐⠺⡄⠀⢀⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⢱⠀⠀⠀⠀⠀⠀⠀⠐⠺⡄" << std::endl;
outfile << "⠀⡠⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡀⠀⢀⡼⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⡠⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡀⠀⢀⡼⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇" << std::endl;
outfile << "⢰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠈⠉⠁⡹⠀⠀⠀⣄⣀⡠⠟⢘⣯⣀⢰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠈⠉⠁⡹⠀⠀⠀⣄⣀⡠⠟⢘⣯⣀" << std::endl;
outfile << "⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡷⠺⡍⠒⣿⣀⣠⡀⠀⠀⠀⠀⠀⠈⠀⠈⡷⠸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡷⠺⡍⠒⣿⣀⣠⡀⠀⠀⠀⠀⠀⠈⠀⠈⡷" << std::endl;
outfile << "⠀⢸⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⢀⣶⠺⡁⠀⠙⠚⠀⠁⡏⢧⣀⡄⠀⠀⠀⠀⠐⠒⣇⠀⢸⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⢀⣶⠺⡁⠀⠙⠚⠀⠁⡏⢧⣀⡄⠀⠀⠀⠀⠐⠒⣇" << std::endl;
outfile << "⠀⠸⣄⣀⣰⠀⠀⠀⠀⠀⠀⠲⣟⣿⡦⣷⠀⠀⠀⠀⢠⠁⣸⣿⣷⢶⡆⢀⣤⡀⣠⡾⠁⠸⣄⣀⣰⠀⠀⠀⠀⠀⠀⠲⣟⣿⡦⣷⠀⠀⠀⠀⢠⠁⣸⣿⣷⢶⡆⢀⣤⡀⣠⡾⠁" << std::endl;
outfile << "⠀⠀⠀⠀⠱⣀⠀⢀⡱⠄⠤⠜⠋⠻⡄⠀⠀⠀⠀⠀⣸⣴⡿⣏⠀⢀⣭⣁⣀⡽⠁⠀⠀⠀⠀⠱⣀⠀⢀⡱⠄⠤⠜⠋⠻⡄⠀⠀⠀⠀⠀⣸⣴⡿⣏⠀⢀⣭⣁⣀⡽⠁" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⣿⡼⠁⠀⠉⠉⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⣿⡼⠁⠀⠉⠉⠀⠀⠀⠀⠀⠀⠈" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⢿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⢿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣧⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣧⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠁⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⠁⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠒⢋⣁⡀⠀⠀⠀⠀⠀⠘⠢⢄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡴⠒⢋⣁⡀⠀⠀⠀⠀⠀⠘⠢⢄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
outfile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠁⠉⠙⠒⠤⣘⣗⠒⠒⠒⠚⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠁⠉⠙⠒⠤⣘⣗⠒⠒⠒⠚⠛⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;

outfile.close();

}





