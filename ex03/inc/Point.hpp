/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:22:06 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/06 17:42:04 by jleroux          ###   ########.fr       */
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
		Point(void);
		Point(const Point &src);
		Point(const float x, const float y);
		~Point(void);

		// OPERATORS
		Point	&operator=(const Point &src);
		
		// GETTERS / SETTERS
		Fixed	getX(void) const;
		void	setX(const float x);
		Fixed	getY(void) const;
		void	setY(const float y);

	private:
		Fixed	_x;
		Fixed	_y;
};

#endif
