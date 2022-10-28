/*
 * File: 5-free_listint.c
 * Auth: Kamau Maina
 */

#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to the head element of listint_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	head = NULL;
}
