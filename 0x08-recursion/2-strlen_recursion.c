/*
 * File: 2-strlen_recursion.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * _strlen_recursion - prints the length of a string.
 * @s: the string whose length to print.
 * Return: nothing.
 */

int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return count;
}
