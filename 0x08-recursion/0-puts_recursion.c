/*
 * File: 0-puts_recursion.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * Return: nothing
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	int index;

	index = 0;

	while (s[index])
	{
		_putchar(s[index]);
		index += 1;
	}
	_putchar('\n');
}
