/*
 * File: 0-whatismyname
 * Auth: Kamau Maina
 */
#include <stdio.h>

/**
 * main - prints the program name followed by a new line
 * @argc: the number of command line arguments
 * 	  given to the program
 * @argv: an array of pointers to the arguments
 *Return: always 0.
 */



int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
