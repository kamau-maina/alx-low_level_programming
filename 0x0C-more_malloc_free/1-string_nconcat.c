/*
 * File: 1-string_nconcat.c
 * Auth: Kamau Maina
 */

#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n:  The max number of bytes of s2 to concat to s1.
 * Return: if the function fails, NULL.
 *	   otherwise, a pointer to the concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, index;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 == "";
	}

	for (index = 0; s1[index]; index++)
	{
		len++;
	}

	concat_str = malloc(sizeof(char) * (len + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (index = 0; s2[index]; index++)
	{
		concat_str[len++] = s2[index];
	}

	concat_str[len] = '\0';

	return (concat_str);
}
