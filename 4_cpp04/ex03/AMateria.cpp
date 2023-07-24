/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:13:21 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/24 12:00:23 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() {
	std::cout << "AMateria default constructor." << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria constructor" << std::endl;
	this->_type = type;
}
AMateria::AMateria(const AMateria& original) {
	std::cout << "AMateria copy constructor" << std::endl;
	this->_type = original._type;
}

AMateria&	AMateria::operator=(const AMateria& original) {
	std::cout << "AMateria assignment operator overload" << std::endl;
	printf("this: %p | *this: %
	")
	if (this == &original)
		return (*this);
	this->_type = original._type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria default destructor" << std::endl;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}

void use(ICharacter& target)