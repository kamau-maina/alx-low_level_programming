/*
 * File: 2-str_concat.
 * Auth: Kamau Maina.
 */

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: a pointer to a null terminated concatenated string
 *	   NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int index, index1 = 0, length = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}

	for (index = 0; s1[index] || s2[index]; index++)
	{
		length++;
	}

	str = malloc(length * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		str[index1++] = s1[index];
	}

	for (index = 0; s2[index]; index++)
	{
		str[index1++] = s2[index];
	}
	return (str);
}
