/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalena <msalena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:39:36 by msalena           #+#    #+#             */
/*   Updated: 2022/04/03 15:30:00 by msalena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string* ShrubberyCreationForm::tree = createShrubberyArray();

ShrubberyCreationForm::ShrubberyCreationForm(void)
					: Form("SHRUBBERY", 145, 137), target ("default"){
	std::cout << "Constructor: default for "
			<< getName() 
			<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& type)
					: Form("SHRUBBERY", 145, 137), target (type){
	std::cout << "Constructor: value assignment for " 
			<< getName()
			<< " with target "
			<<  target
			<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
					: Form (other), target (other.getTarget()){
	std::cout << "Constructor: copy for " 
			<< getName()
			<< " with target "
			<<  target
			<< std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "Destructor: "
			<< getName()
			<< " with target "
			<<  target 
			<< " done here" 
			<< std::endl;
}


const std::string	ShrubberyCreationForm::getTarget() const{
	return (target);
}


void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const{
	if (!openTargetFile()){
		beExecute(executor);
		std::cout << "--->"
				<< "\U0001F334"
				<< " New file with palm was created"
				<< std::endl;
	}
}

int	ShrubberyCreationForm::openTargetFile(void) const{
	std::string			filename;
	std::ofstream		targetFile;
	
	filename.append(target);
	filename.append("_shrubbery");
	targetFile.open(filename);
	if (!targetFile.is_open()){
		std::cout << "SOME PROBLEMS WITH CREATING FILE" << std::endl;
		return (1);
	}
	for (int i=0; i < 12; i++){
		targetFile << tree[i];
	}
	return (0);
}

//STATIC_METHOD
std::string* ShrubberyCreationForm::createShrubberyArray(void){
	std::string	*n_tree = new std::string[12];
	
	n_tree[0].append("         __ _.--..--._ _\n");
	n_tree[1].append("      .-' _/   _/\\_   \\_'-.\n");
	n_tree[2].append("     |__ /   _/\\__/\\_   \\__|\n");
	n_tree[3].append("        |___/\\_\\__/  \\___|\n");
	n_tree[4].append("               \\__/\n");
	n_tree[5].append("               \\__/\n");
	n_tree[6].append("                \\__/\n");
	n_tree[7].append("                 \\__/\n");
	n_tree[8].append("              ____\\__/___\n");
	n_tree[9].append("        . - '             ' -.\n");
	n_tree[10].append("       /                      \\\n");
	n_tree[11].append("~~~~~~~  ~~~~~ ~~~~~  ~~~ ~~~  ~~~~~");
	return (n_tree);
}

void	ShrubberyCreationForm::deleteTreeMemory(void){
	delete[] tree;
}







