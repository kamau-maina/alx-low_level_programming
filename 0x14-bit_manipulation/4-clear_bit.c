/*
 * File: 4-clear_bit.
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the bit.
 * @index: index starting from zero of the bit you want to set.
 *
 * Return: -1 incase of an error,
 *	   1 if it works.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
