/*
 * File: 1-args.c
 * Auth: Kamau Maina
 */

#include <stdio.h>

/**
 * main - prints the number of arguments passed to it.
 * @argc: the number of arguments passed to main.
 * @argv: pointers array to the arguments.
 * Return: 0.
 */

int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc-1);
	return (0);
}
