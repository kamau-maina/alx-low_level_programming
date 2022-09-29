/*
 * File: 3-factorial.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * factorial - finds the factorial of a given number.
 * @n: the number whose factorial to find.
 *Return: factoria if @n >0, -1 otherwise.
 */

int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
