/*
 * File: 3-add_nodeint_end.c
 * Auth: Kamau Maina
 */

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head element of listint_t list
 * @n: the integer to be added at the newly created node.
 *
 * Return: NULL if the function fails,
 *	   otherwise, return the address if the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}
