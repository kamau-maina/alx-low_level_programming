/*
 * File: 7-print_last_digit.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 *print_last_digit - prints the last digit of a given bumber
 *@n: the number whose last digit we are printing
 *Return:value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
