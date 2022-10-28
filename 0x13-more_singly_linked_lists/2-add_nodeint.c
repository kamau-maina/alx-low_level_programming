/*
 * File: 2-add_nodeint.c
 * Auth: Kamau Maina
 */

#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beggining
 *		     of listint_t list.
 * @head: pointer to the head node of list_int list
 * @n:    the integer to be contained in the new node
 *
 *Return: NULL if the function fails,
 *	  otherwise, the address of the newly added element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
