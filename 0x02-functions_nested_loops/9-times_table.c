/*
 * File: 9-times_table
 * Auth: Kamau Maina
 */
#include "main.h"
/*
 *times_table - prints 9 times table starting with 0
 *Return: always 0;
 */
voi times_table(void)
{
	int a;
	int b;
	int c;
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			c=a*b;
			_putchar(c);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
