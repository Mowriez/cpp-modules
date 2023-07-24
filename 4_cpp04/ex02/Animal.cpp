/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:34:29 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/23 22:40:07 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal& original) {
	this->_type = original._type;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal&	Animal::operator=(const Animal& original) {
	if (this == &original)
		return (*this);
	this->_type = original._type;
	std::cout << "Animal assignment operator overload called." << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

std::string	Animal::getType() const {
	return("Object type: " + this->_type);
}

