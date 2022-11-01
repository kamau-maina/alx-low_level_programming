/*
 * File: 0-binary_to_uint.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: points to a string of 0 and 1 characters
 *
 * Return: 0 if there one or more characters in the string
 *	   b that is not 0 or 1.
 *	   0 if b is null,
 *	   otherwise, the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, m = 1;
	int len;

	if (*b == '\0')
		return (0);
	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * m;
		m *= 2;
	}

	return (num);
}
