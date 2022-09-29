/*
 * File: 4-pow_recursion.c.
 * Auth: Kamau Maina.
 */

#include "main.h"

/**
 * _pow_recursion - returns the value of @x raised to @y
 * @x: the int to find the value of.
 * @y: the value to raise x to.
 *Return: the value of @x to power @y.-1 if y < 0;
 */

int _pow_recursion(int x, int y)
{
	int pow = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	pow *= _pow_recursion(x, y - 1);
	return (pow);
}

