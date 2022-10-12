/*
 * File: 1-init_dog.c.
 * Auth: Kamau Maina.
 */

#include "dog.h"
#include <stdlib.h>
#include <main.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the structure dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		my_dog.name = name;
		my_dog.age = age;
		my_dog.owner = owner;
	}

}
