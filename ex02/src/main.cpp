/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleroux <jleroux@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:49:51 by jleroux           #+#    #+#             */
/*   Updated: 2023/02/14 17:55:22 by jleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{

	Fixed		a;
	Fixed 		b (Fixed(15.25f) * Fixed(3));

	a = Fixed(+2.5f);

	std::cout << std::boolalpha << std::endl
		<< "A = " << a << std::endl
		<< "B = " << b << std::endl
		<< "A > B = " << (a > b) << std::endl
		<< "A > A = " << (a > a) << std::endl
		<< "A < B = " << (a < b) << std::endl
		<< "A < A = " << (a < a) << std::endl
		<< "A >= B = " << (a >= b) << std::endl
		<< "A >= A = " << (a >= a) << std::endl
		<< "A <= B = " << (a <= b) << std::endl
		<< "A <= A = " << (a <= a) << std::endl
		<< "A == B = " << (a == b) << std::endl
		<< "A == A = " << (a == a) << std::endl
		<< "A != B = " << (a != b) << std::endl
		<< "A != A = " << (a != a) << std::endl
		<< std::endl
		<< "A + B = " << a + b << std::endl
		<< "B + A = " << b + a << std::endl
		<< "A - B = " << a - b << std::endl
		<< "B - A = " << b - a << std::endl
		<< "A - B == -(B - A): " << (a-b == Fixed(0) - (b-a)) << std::endl
		<< "B / A = " << b / a << std::endl
		<< "A / B = " << a / b << std::endl
		<< "0 / B = " << Fixed(0) / b << std::endl
		<< "A / 0 = " << a / Fixed(0) << std::endl
		<< "A * B = " << a * b << std::endl
		<< "A * 0 = " << a * Fixed(0) << std::endl
		<< std::endl
		<< "A   = " << a << std::endl
		<< "Pre : " << ++a << std::endl
		<< "A   = " << a << std::endl
		<< "Post: " << a++ << std::endl
		<< "A   = " << a << std::endl
		<< "Pre : " << --a << std::endl
		<< "A   = " << a << std::endl
		<< "Post: " << a-- << std::endl
		<< "A   = " << a << std::endl
		<< std::endl
		<< "Max(A, B) = " << Fixed::max(a, b) << std::endl
		<< "Max(B, A) = " << Fixed::max(b, a) << std::endl
		<< "Min(A, B) = " << Fixed::min(a, b) << std::endl
		<< "Min(B, A) = " << Fixed::min(b, a) << std::endl;

	return 0;
}
