/*
 * File: 0-memset.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * memset - Fills memory with a constant byte.
 * @s: A pointer to the memory area.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area .
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
