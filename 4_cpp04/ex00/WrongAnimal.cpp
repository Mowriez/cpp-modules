/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:21:08 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/23 12:21:51 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original) {
	this->_type = original._type;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& original) {
	if (this == &original)
		return (*this);
	this->_type = original._type;
	std::cout << "WrongAnimal assignment operator overload called." << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal deconstructor called." << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Random WrongAnimal noises..." << std::endl;
}

std::string	WrongAnimal::getType() const {
	return("Object type: " + this->_type);
}
