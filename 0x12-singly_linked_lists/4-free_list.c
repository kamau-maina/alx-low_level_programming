/*
 * File: 4-free_list.c
 * Auth: Kamau Maina
 */

#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: a pointer to the list list_t.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
