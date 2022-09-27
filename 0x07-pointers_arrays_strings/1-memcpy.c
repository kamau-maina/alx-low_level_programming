/*
 * File: 1-memcpy.c
 * Auth: Kamau maina
 */

#include "main.h"

/**
 * _memcpy() - copies @n bytes from memory area @src
 *		 to memory area @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
