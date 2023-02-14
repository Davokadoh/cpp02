/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:22:06 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/14 14:59:33 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>

class Fixed
{
	public:
		// CONSTRUCTORS / DESTRUCTOR
		Fixed(void);
		Fixed(const Fixed &src);
		~Fixed(void);

		// OPERATORS
		Fixed	&operator=(const Fixed &src);

		// GETTERS
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

	private:
		int					_raw;
		static const int	_bits = 8; //fractional part
};

#endif
