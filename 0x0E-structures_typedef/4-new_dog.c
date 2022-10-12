/*
 * File: 4-new_dog.c.
 * Auth: Kamau Maina.
 */

#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: owner of the new dog.
 * Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	*my_dog = malloc(sizeof(dog_t));
	if (*my_dog == NULL)
		return (NULL);


