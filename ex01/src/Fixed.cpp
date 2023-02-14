/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:27:15 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/06 16:43:40 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Default constructor
Fixed::Fixed(void) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// Int constructor 
Fixed::Fixed(const int nbr) : _raw(nbr << this->_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

// Float constructor
Fixed::Fixed(const float nbr) : _raw((int)(roundf(nbr * (1 << this->_bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// Assignation operator
Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_raw = rhs.getRawBits();
	return (*this);
}

// Insertion operator
std::ostream	&operator<<(std::ostream &output_stream, const Fixed &rhs)
{
	output_stream << rhs.toFloat();
	return (output_stream);
}

// Getter
int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw);
}

int	Fixed::toInt(void) const
{
	return (this->_raw >> this->_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_raw / (float)(1 << this->_bits));
}
