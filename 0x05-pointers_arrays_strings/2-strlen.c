/*
 * File: 2-strlen.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the character array to be checked
 * Return: The string to check the length of
 */

size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
