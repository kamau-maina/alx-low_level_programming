/*
 * File: 3-puts.c
 * Auth: kamau Maina
 */

#include "main.h"

/**
 * _puts - Prints a string to standard output.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
