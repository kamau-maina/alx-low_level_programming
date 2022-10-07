/*
 * File: 3-array_range.c .
 * Auth: Kamau Maina.
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers including @min and @max.
 *		  ordered from min to max.
 *@min: The first array integer.
 *@max: The last array integer.
 *Return: NULL if @min > @max.
 *	  The pointer to the  newly allocated array.
 *	  NULL if malloc fails.
 */

int *array_range(int min, int max)
{
	int a = min, b = max, index;
	int *ptr;

	if (a > b)
		return (NULL);

	for (index = a; index <= b; index++)
	{
		ptr[index] = malloc(sizeof(int));
	}

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

