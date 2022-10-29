/*
 * File: 100-reverse_listint.c
 * Auth: Kamau Maina
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *lead, *tail;

	if (head == NULL || *head == NULL)
		return (NULL);

	tail = NULL;

	while ((*head)->next != NULL)
	{
		lead = (*head)->next;
		(*head)->next = tail;
		tail = *head;
		*head = lead;
	}

	(*head)->next = tail;

	return (*head);
}
