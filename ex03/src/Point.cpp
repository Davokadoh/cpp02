/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:27:15 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/15 14:34:54 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

// Default constructor
Point::Point(const float x, const float y) : _x(x), _y(y) {}

// Copy constructor
Point::Point(const Point &src) : _x(src.getX()), _y(src.getY()) {}

// Destructor
Point::~Point(void) {}

// Assignation operator
Point	&Point::operator=(const Point &rhs)
{
	if (this != &rhs)
		std::cout << "Trying to assign const values" << std::endl;
	return *this;
}

// X Getter
Fixed	Point::getX(void) const
{
	return this->_x;
}

// Y Getter
Fixed	Point::getY(void) const
{
	return this->_y;
}
