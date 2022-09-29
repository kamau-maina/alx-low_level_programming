/*
 * File: 1-print_rev_recursion.c
 * Auth:Kamau Maina
 */

#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * Return: nothing
 * @s:the string to be reversed.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursions(s + 1);
		_putchar(*s);
	}
}

