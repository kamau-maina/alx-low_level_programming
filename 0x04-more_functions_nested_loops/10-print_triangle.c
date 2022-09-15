/*
 * File: 10-print_triangle.c
 * Auth: Kamau Maina
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int base, height;

	if (size > 0)
	{
		for (base = 1; base <= size; base++)
		{
			for (height = size - base; height > 0; height--)
				_putchar(' ');

			for (height = 0; height < base; height++)
				_putchar('#');

			if (base == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

