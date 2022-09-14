/*
 * File: 3-islower.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * _islower -checks whether a character is lowercase.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return 0;
}
