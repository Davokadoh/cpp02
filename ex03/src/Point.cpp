/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:27:15 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/06 17:32:25 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

// Default constructor
Point::Point(void) : _x(0), _y(0) {}

// Copy constructor
Point::Point(const Point &src) : _x(src._x), _y(src._y) {}

// Float constructor
Point::Point(const float x, const float y) : _x(x), _y(y) {}

// Destructor
Point::~Point(void) {}

// Assignation operator
Point	&Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		this->_x = rhs.getX();
		this->_y = rhs.getY();
	}
	return *this;
}

// X Getter
Fixed	Point::getX(void) const
{
	return this->_x;
}

// X Setter
void	Point::setX(const float x)
{
	this->_x = x;
}

// Y Getter
Fixed	Point::getY(void) const
{
	return this->_y;
}

// Y Setter
void	Point::setY(const float y)
{
	this->_y = y;
}
