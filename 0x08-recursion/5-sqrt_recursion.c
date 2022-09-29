/*
 * File: 5-sqrt_recursion.c
 *Auth: Kamau Maina.
 */

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square of a number.
 * Return: natural square root of number
 * 	  if @n has no sqrt, -1.
 *@n: the int to find sqrt of.
 */

int _sqrt_recursion(int n)
{
	int root;

	root = 0;
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1)
	}
	
