/*
 * File: 103-find_loop.c
 * Auth:Kamau Maina
 */

#include "lists.h"

/**
 * find_listint_loop - Finds a loop in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: NULL if there is no loop,
 *         Otherwise,the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *this, *that;

	if (head == NULL || head->next == NULL)
		return (NULL);

	this = head->next;
	that = (head->next)->next;

	while (this)
	{
		if (this == that)
		{
			this = head;

			while (this != that)
			{
				this = this->next;
				that = that->next;
			}

			return (this);
		}

		this = this->next;
		that = (that->next)->next;
	}

	return (NULL);
}
