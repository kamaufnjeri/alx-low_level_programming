#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node at certain index
 * @head: address of node index to insert node starts from zero
 * @n: node to be inserted
 * @idx: index of node to insert
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *last;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	last = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (idx > 0)
	{
		for (node = 0; node < (idx - 1); node++)
		{
			while (last->next != NULL)
			{
				last = last->next;
			}
		}
		new->next = last->next;
		last->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
}
