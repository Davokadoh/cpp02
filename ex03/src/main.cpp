/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trossel <trossel@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:38:45 by trossel           #+#    #+#             */
/*   Updated: 2023/02/15 14:41:45 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

void	test(Point const a, Point const b, Point const c, Point const p)
{
	std::cout << "A = (" << a.getX() << "," << a.getY() << ")" << std::endl;
	std::cout << "B = (" << b.getX() << "," << b.getY() << ")" << std::endl;
	std::cout << "C = (" << c.getX() << "," << c.getY() << ")" << std::endl;
	std::cout << "P = (" << p.getX() << "," << p.getY() << ")" << std::endl;

	if (bsp(a, b, c, p))
		std::cout << "P is in triangle ABC" << std::endl;
	else
		std::cout << "P is NOT in triangle ABC" << std::endl;

	std::cout << std::endl;
}

int main(void)
{
	Point	a(0.0f, 0.0f);
	Point	b(500.0f, 0.0f);
	Point	c(500.0f, 500.0f);

	Point	p0(300.0f, 195.4f);
	Point	p1(0.0f, 0.0f);
	Point	p2(500.0f, 0.0f);
	Point	p3(500.0f, 500.0f);
	Point	p4(-1.0f, -3000.0f);

	test(a, b, c, p0); // PASS
	test(a, b, c, p1); // FAIL
	test(a, b, c, p2); // FAIL
	test(a, b, c, p3); // FAIL
	test(a, b, c, p4); // FAIL

	return 0;
}
