/*
 * File: 2-strchr.c
 * Auth: Kamau Maina
 */

#include "main.h"

/*
 * *_strchr - returns a pointer to the first occurrence
 *		of a character @c in a string @s.
 *@s: the string to be checked
 *@c: the character to search for
 *Return: a pointer to c's first occurrence
 *		 if c is found and null
 *		 if c is not found
 */

char *_strchr(char *s, char c)
{
		int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');


}
