/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrautne <mtrautne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:31:49 by mtrautne          #+#    #+#             */
/*   Updated: 2023/07/19 10:30:03 by mtrautne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <ostream>

#ifndef FIXED_HPP
# define FIXED_HPP

// colors
# define RED "\033[1;31m"
# define PURPLE "\033[1;35m"
# define YELLOW "\033[1;33m"
# define GREEN "\033[1;32m"
# define BLUE "\033[1;34m"
# define CYAN "\x1b[1;36m"
# define RESET "\033[0m"

// class
class Fixed {
	private:
		int					_value;
		static const int	_fract_bits_num; 

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& original);
		Fixed& operator=(const Fixed& original);

		Fixed(const int int_value);
		Fixed(const float float_value);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& ostream_obj, const Fixed& fixed);

#endif
