/*
 * File: 1-strdup.
 * Auth: Kamau Maina.
 */

#include <main.h>
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
	char *ptr;
	int index;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(str));

	for (index = 0; str[index]; index++)
	{
		ptr[index] = str[index];
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
}



