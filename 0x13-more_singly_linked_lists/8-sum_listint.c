/*
 * File: 8-sum_listint.c
 * Auth: Kamau Maina
 */

#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculates the sum of all the data(n) of
 *		 listint_t linked list
 * @head: pointer to the head node of the linked list
 *
 * Return: 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
