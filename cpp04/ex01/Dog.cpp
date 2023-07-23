/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:34:38 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/23 12:03:21 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog& original) : Animal() {
	this->_type = original._type;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog&	Dog::operator=(const Dog& original) {
	if (this == &original)
		return (*this);
	this->_type = original._type;
	std::cout << "Dog assignment operator overload called." << std::endl;
	return (*this);
	}

Dog::~Dog() {
	std::cout << "Dog deconstructor called." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}
