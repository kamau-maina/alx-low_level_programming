/*
 * File: 9-insert_nodeint.c
 * Auth: Kamau Maina
 */

#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes a node the given index of
 *			      a listint_t linked list.
 * @head: a pointer to the adress of the head node of listint_t list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeds
 *	   -1 if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

