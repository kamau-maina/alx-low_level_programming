#ifndef main_H
#define main_H

/*
 * File: main.h
 * Auth: Kamau Maina
 * Desc: Header files containing prototypes for all fuctions
 *	 used in the 0x0C dir
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
