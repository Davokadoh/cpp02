/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:22:06 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/15 14:23:59 by jleroux          ###   ########.fr       */
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
		
		// COMPARISION OPS
		bool	operator<(const Fixed &src) const;
		bool	operator>(const Fixed &src) const;
		bool	operator<=(const Fixed &src) const;
		bool	operator>=(const Fixed &src) const;
		bool	operator==(const Fixed &src) const;
		bool	operator!=(const Fixed &src) const;

		// ARITHMETIC OPS
		Fixed	operator+(const Fixed &src) const;
		Fixed	operator-(const Fixed &src) const;
		Fixed	operator*(const Fixed &src) const;
		Fixed	operator/(const Fixed &src) const;

		// INCREMENTATION / DECREMENTATION
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		// GETTERS / SETTERS
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		// MEMBER FUNCTIONS
		int		toInt(void) const;
		float	toFloat(void) const;

		// MIN / MAX
		static Fixed		&min(Fixed &a, Fixed &b);
		const static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed &a, const Fixed &b);

	private:
		int					_raw;
		static const int	_bits = 8; //fractional part
};

std::ostream	&operator<<(std::ostream &output_stream, const Fixed &rhs);

#endif
