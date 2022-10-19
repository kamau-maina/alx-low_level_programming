/*
 * Auth: Kamau maina
 *	 Purity Chege
 * File: _printf.c
 */

#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */

int_printf(const char *format, ...)
{
	int sum = 0, index;
	va_list args;
	int (*fptr)(args);

	/*check if format string is empty.*/

	if (format == NULL)
		return (-1);
	/*if the format is not empty, we traverse it looking for '%'*/

	for (index = 0; format[index]; index++)
	{
		if (format[index] == '%')
		{
			index++ /*poit index to the next character*/
				if (!(format[index]))
					return (-1);/*checking if there's a character after '%'*/
				/*we need a function that compares the modifier*/
				/*assign our function pointer to the address returned by the function*/
				fptr = flag(format[index]
				/*check if the functin fails*/
				if (fptr == NULL)
					write('%');
					write(format[index]);
					sum += 2;
				else
					sum += fptr(argument)/* if the specifier exists, increament our count*/
		}
/*if there was no '%',we print the string literal present*/

		else
		{
			write(format[index]);
			sum ++;
		}
	}

	va_end(args);
	return (sum);
}
