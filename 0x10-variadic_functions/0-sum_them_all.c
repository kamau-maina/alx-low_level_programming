/*
 * File: 0-sum_them_all.c
 * Auth: Kamau maina
 */

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters.
 * @n: the total number of parameters suppplied to the program.
 * Return: if n > 0sum of its parameters
 *	   0 if n==0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum;
	va_list args;
	if (n == 0)
		return (0);
	va_start(args, n);
	sum = 0;
	for (; index < n; index++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
