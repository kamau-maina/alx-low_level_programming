/*
 * File: 5-more_numbers.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * more_numbers - prints 10x the numbers 0-14 and a new line
 */

void more_numbers(void)
{
	int num,count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
