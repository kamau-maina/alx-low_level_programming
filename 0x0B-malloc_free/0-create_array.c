/*
 * File: 0-create_array .
 * Auth: Kamau Maina.
 */

#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes
 *	  it with a specific character.
 * @size: The size of the array to be initialized.
 * @c: The specific character to initialize the array with.
 * Return: Null if it fails,otherwise, pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == NULL)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
