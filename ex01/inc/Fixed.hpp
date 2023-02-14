/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:22:06 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/06 17:39:40 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>

class	Fixed
{
	public:
		// CONSTRUCTORS / DESTRUCTORS
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed(const int);
		Fixed(const float);
		~Fixed(void);

		// OPERATORS
		Fixed	&operator=(const Fixed &src);

		// GETTERS / SETTERS
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		// MEMBER FUNCTIONS
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int					_raw;
		static const int	_bits = 8; //fractional part
};

std::ostream	&operator<<(std::ostream &output_stream, const Fixed &rhs);

#endif
