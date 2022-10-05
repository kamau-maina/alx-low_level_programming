/*
 * File: 1-strdup.
 * Auth: Kamau Maina.
 */

#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *	      which contains a copy of the given string as a parameter
 *@str: the string tp be duplicated
 *Return: null if str = NULL.
 *	   otherwise pointer to the duplicated string
 *	   Null if memory available is insufficient.
 */

char *_strdup(char *str)
{
	char *dup;
	int index, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		length++;
	}

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		dup[index] = str[index]
	}
	dup[length] = '\0';
	return (dup);
}
