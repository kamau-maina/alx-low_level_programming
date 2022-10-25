/*
 * File: 0-print_list.c
 * Auth: Kamau Maina
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t.
 * @h: list_t list
 *
 * Return: the number of nodes if string != NULL
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;

	}
	return (nodes);
}
