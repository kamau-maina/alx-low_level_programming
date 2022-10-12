/*
 * File: 5-free_dog.c
 * Auth: Kamau Maina
 */

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
		free(d->owner);
		free(d->name);
		free(d);
}
