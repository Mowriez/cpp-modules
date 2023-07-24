/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:13:22 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/24 10:43:05 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria {
	protected:
		std::string	_type;
		
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& original);
		AMateria&	operator=(const AMateria& original);
		~AMateria();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
