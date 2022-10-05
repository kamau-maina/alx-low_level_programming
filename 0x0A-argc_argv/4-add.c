/*
 * File: 4-add.c.
 * Auth: Kamau Maina.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two positive numbers.
 * @argc: keeps count of arguments passed to main.
 * @argv: an array of pointers to the arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
