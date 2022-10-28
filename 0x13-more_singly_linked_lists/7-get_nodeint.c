/*
 * File: 7-get_nodeint.c
 * Auth: Kamau Maina
 */

#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - locates a given node in listint_t list.
 * @head: pointer to the head of listint_t list
 * @index: index of the node to be found starting from 0.
 *
 * Return: NULL if the node does not exist,
 *	   otherwise, the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	for (; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
