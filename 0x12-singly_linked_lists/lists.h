#ifndef LISTS_H
#define LISTS_H

/*
 * File: lists.h
 * Auth: Kamau Maina
 * desc: contains all function prototypes used in
 *	 in the dir 0x12 singly linked lists.
 */

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t; 

#endif

