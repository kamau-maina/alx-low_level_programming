/*
 * File: 2-calloc.c.
 * Auth: Kamau Maina.
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements.
 * @nmemb: The number of elements of the array.
 * @size: The byte size of each array element.
 * Return: Null if nmemb or size = 0 or if func fails.
 *	   otherwise, a pointerto the allocated mem space.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *fill;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}

	fill = ptr;

	for (index = 0; index < (size * nmemb); index++)
	{
		fill[index] = '\0';
	}

	return (ptr);
}

