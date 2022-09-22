/*
 * File: 5-string_toupper.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * @str: the string to be converted.
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] += 32;
		}
		index++;
	}
	return (str);
}
