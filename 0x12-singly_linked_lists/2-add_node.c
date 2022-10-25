/*
 * File: 2-add_node.c
 * Auth: Kamau Maina
 */

#include "lists.h"

/**
 * add_node - adds a new node at the beggining of a list_t list.
 * @str: string to be added to the list_t list.
 *	 has to be duplicated.
 * @head: pointer to the head of the list.
 *
 * Return: NULL if the function fails
 *	  otherwise, the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (length = 0; str[len];)
		len++;

	new->str = duplicate;
	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
