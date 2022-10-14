/*
 * File: 2-int_index.c
 * Auth: Kamau Maina
 */

#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to
 *	 compare values.
 * @array: the array of integers.
 * Return: index to the first element for which
 *	   cmp does not return 0.
 *	   -1 if no elements match.
 *	   -1 if size < 0.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
