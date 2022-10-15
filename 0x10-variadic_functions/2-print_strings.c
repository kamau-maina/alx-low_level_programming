/*
 * File: 2-print strings
 * Auth: Kamau Maina
 */

#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a string followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n:number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int index = 0;
	char *c;
	va_list str;

	va_start(str, n);

	for (; index < n; index++)
	{
		c = va_arg(str, char *);

		if (c == NULL)
			printf("(nill)");

		else
			printf("%s", c);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(str);
}
