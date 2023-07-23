/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:48:38 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/23 12:03:27 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	this->_type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& original) : Animal() {
	this->_type = original._type;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat&	Cat::operator=(const Cat& original) {
	if (this == &original)
		return (*this);
	this->_type = original._type;
	std::cout << "Cat assignment operator overload called." << std::endl;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow meow!" << std::endl;
}
