/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:22:06 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/15 13:56:12 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <string>

class	Fixed;

class	Point
{
	public:
		// CONSTRUCTORS / DESTRUCTORS
		Point(const float x = 0, const float y = 0);
		Point(const Point &src);
		~Point(void);

		// OPERATORS
		Point	&operator=(const Point &src);
		
		// GETTERS / SETTERS
		Fixed	getX(void) const;
		Fixed	getY(void) const;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif
