/*
 * File: 5-rev_string.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	void rev_string(char *s)
{
	int length = 0, index = 0;
	char tmp;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
