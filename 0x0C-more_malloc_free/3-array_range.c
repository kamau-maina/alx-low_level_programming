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
	int  index;
	int *ptr;

	if (min > max)
		return (NULL);

		ptr = malloc(sizeof(int) * (max - (min + 1));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; idex <= (max - (min + 1)); index++)
	{
		ptr[index] = min++;

	return (ptr);
}

