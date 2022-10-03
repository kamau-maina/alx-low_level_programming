/*
 * File: mul.c.
 * Auth: Kamau Maina.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers followed by a new line.
 * @argc: the number of arguments passed to main.
 * @argv: an array of pointers to the arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int answer, num, num1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	answer = num1 * num;
	printf("%d\n", answer);
	return (0);
}


