#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed lamba[3];
	Fixed detT;

	detT = ((b.getY()-c.getY())*(a.getX()-c.getX())+(c.getX()-b.getX())*(a.getY()-c.getY()));
	lamba[0] = ((b.getY()-c.getY())*(point.getX()-c.getX())+(c.getX()-b.getX())*(point.getY()-c.getY())) / detT;
	lamba[1] = ((c.getY()-a.getY())*(point.getX()-c.getX())+(a.getX()-c.getX())*(point.getY()-c.getY())) / detT;
	lamba[2] = Fixed(1) - lamba[0] - lamba[1];

	for (int i = 0; i < 3; i++)
	{
		if (lamba[i] <= Fixed(0) || Fixed(1) <= lamba[i])
			return (false);
	}
	return (true);
}
