/*
 * File: 6-pop_listint.c
 * Auth: Kamau Maina
 */

#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the address of the head node of listint_t.
 *
 * Return: the head node's data, data(n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (*head == NULL)
		return (0);

	temp = *head;
	val = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (val);
}

