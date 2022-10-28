/*
 * File: 1-listint_len.c
 * Auth: Kamau Maina
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - countd the number of elements in a linked list
 * @h: pointer to the head of the listint_t linked list
 *
 * Return: the number of elements in the list_int list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes += 1;
		h = h->next;
	}

	return (nodes);
}
