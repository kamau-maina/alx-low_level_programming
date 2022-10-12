/*
 *File: 2-print_dog.c.
 *Auth: Kamau Maina.
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: the struct to be printed.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: nameless\n");
	if (d->age < 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: N\\A");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: none\n");
}
