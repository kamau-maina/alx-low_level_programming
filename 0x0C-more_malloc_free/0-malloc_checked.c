/*
 * File: 0x0C-more_malloc_free
 * Auth: Kamau Maina
 */

#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
