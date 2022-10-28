/*
 * file: 0-print_listint.c
 * Auth: Kamau Maina
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: pointer to the head of listint_t list
 *
 * Return: the number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes += 1;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
