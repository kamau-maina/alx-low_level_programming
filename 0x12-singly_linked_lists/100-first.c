/*
 * File: 100-first.c
 * Auth: Kamau Maina
 */

#include <stdio.h>

void __attribute__((constructor)) func(void);

/**
 * func - Prints a string before the
 *        main function is executed.
 */
void func(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
