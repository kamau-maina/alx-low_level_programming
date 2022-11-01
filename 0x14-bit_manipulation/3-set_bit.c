/*
 * File: 3-set_bit.c
 * Auth:Kamau Maina
 */

#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: the index, starting from zero of the bit you want to set.
 *
 * Return: -1 incase of an error,
 *         Otherwise, 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
