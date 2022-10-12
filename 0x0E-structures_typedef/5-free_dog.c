/*
 * File: 5-free_dog.c
 * Auth: Kamau Maina
 */

#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: struct dog.
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
