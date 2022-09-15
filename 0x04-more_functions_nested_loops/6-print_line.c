/*
 * File: 6-print_line.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * print_line - draws a straight line on the terminal.
 * @n: the number of times the character will be printed
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
