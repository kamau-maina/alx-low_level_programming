/*
 * File: 2-args.c
 * Auth: Kamau Maina
 */

#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: keeps count of received arguments.
 * @argv: an array of pointers to the arguments.
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", argv[argc]);
	}
	return (0);
}
