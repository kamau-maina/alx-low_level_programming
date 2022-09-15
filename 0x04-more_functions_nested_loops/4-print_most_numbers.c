/*
 * File: 4-print_most_numbers.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * print_most_numbers - prints numbers 0 through 9 except 2 and 4.
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			num = num+1;
		}
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
