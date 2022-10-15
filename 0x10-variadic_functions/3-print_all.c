/*
 * File: print_all.c
 * Auth: Kamau Maina
 */

#include "variadic_functioms.h"
#include <stdarg.h>

/**
 *print_float - prints floating point numbers
 *@f: points to the float to be printed
 */

void print_float(va_list f)
{
	float num;

	num = va_arg(f, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @s: points to the string to be printed
 */

void print_string(va_list s)
{
	char *c;

	c = va_arg(s, char *);

	if (c == NULL)
		printf("(nil)");
		return;
	printf("%s", c);
}

/**
 * print_int - prints an integer
 * @i: points to the integer to be printed
 */

void print_int(va_list i)
{
	int num;

	num = var_arg(i, int);
	printf("%d", num);
}

/**
 * print_char - prints a character.
 * @c: points to the character to print.
 */

void print_char(va_list c)
{
	char lett;

	lett = var_arg(c, int);
	printf("%c", lett);
}

/**
 * print_all -prints anythinh
 * @format: the list of arguments pased to the fuction
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
