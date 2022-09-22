/*
 * File: 3-strcmp.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * _strcmp - Compares  two strings char by char.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *Return:  if equal, 0;
 *	   if s2 > s1, negative number of chars different.
 *	   if s1 > s2, positive number of chars different.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
