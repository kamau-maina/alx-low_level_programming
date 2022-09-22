/*
 * File: 7-leet.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int index = 0, index1;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index])
	{
		for (index1 = 0; index1 <= 7; index1++)
		{
			if (str[index] == leet[index1] ||
			    str[index] - 32 == leet[index1])
				str[index] = index1 + '0';
		}

		index++;
	}

	return (str);
}
