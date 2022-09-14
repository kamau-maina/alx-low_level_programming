/*
 * File: 6-abs.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The int whose absolute value we calculate
 *Return: The abolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
