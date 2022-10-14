/*
 * File: 1-array iterator
 * Auth: Kamau Maina
 */

#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 *		    parameter on each element of an array
 *@size: size of the array
 *@array: the array.
 * @action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
