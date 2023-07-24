/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:31:04 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/23 12:34:58 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat& original) : WrongAnimal() {
	this->_type = original._type;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& original) {
	if (this == &original)
		return (*this);
	this->_type = original._type;
	std::cout << "WrongCat assignment operator overload called." << std::endl;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat deconstructor called." << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Weom weom!" << std::endl;
}
