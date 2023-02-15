/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:27:15 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/15 14:28:07 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//Default constructor
Fixed::Fixed(void) : _raw(0) {}

//Copy constructor
Fixed::Fixed(const Fixed &src) : _raw(src._raw) {}

// Int constructor
Fixed::Fixed(const int nbr) : _raw(nbr << this->_bits) {}

// Float constructor
Fixed::Fixed(const float nbr) : _raw(int(roundf(nbr * (1 << this->_bits)))) {}

Fixed::~Fixed(void) {}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return *this;
}

bool	Fixed::operator<(const Fixed &src) const
{
	return this->_raw < src._raw;
}

bool	Fixed::operator>(const Fixed &src) const
{
	return this->_raw > src._raw;
}

bool	Fixed::operator<=(const Fixed &src) const
{
	return this->_raw <= src._raw;
}

bool	Fixed::operator>=(const Fixed &src) const
{
	return this->_raw >= src._raw;
}

bool	Fixed::operator==(const Fixed &src) const
{
	return this->_raw == src._raw;
}

bool	Fixed::operator!=(const Fixed &src) const
{
	return this->_raw != src._raw;
}

Fixed	Fixed::operator+(const Fixed &src) const
{
	Fixed	result;

	result._raw = this->_raw + src._raw;
	return result;
}

Fixed	Fixed::operator-(const Fixed &src) const
{
	Fixed	result;

	result._raw = this->_raw - src._raw;
	return result;
}

Fixed	Fixed::operator*(const Fixed &src) const
{
	Fixed	result;

	result = this->toFloat() * src.toFloat();
	return result;
}

Fixed	Fixed::operator/(const Fixed &src) const
{
	Fixed	result;

	result = this->toFloat() / src.toFloat();
	return result;
}

// Pre-increment
Fixed	&Fixed::operator++(void)
{
	this->_raw++;
	return *this;
}

// Post-increment
Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);

	this->_raw++;
	return old;
}

// Pre-decrement
Fixed	&Fixed::operator--(void)
{
	this->_raw--;
	return *this;
}

// Post-decrement
Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);

	this->_raw--;
	return old;
}

// Getter
int	Fixed::getRawBits(void) const
{
	return this->_raw;
}

// Setter
void	Fixed::setRawBits(const int raw)
{
	this->_raw = raw;
}

int	Fixed::toInt(void) const
{
	return this->_raw >> this->_bits;
}

float	Fixed::toFloat(void) const
{
	return float(this->_raw) / float(1 << this->_bits);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}

std::ostream	&operator<<(std::ostream &output_stream, const Fixed &rhs)
{
	output_stream << rhs.toFloat();
	return output_stream;
}
