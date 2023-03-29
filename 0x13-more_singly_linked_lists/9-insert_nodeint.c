#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node at certain index
 * @head: address of node index to insert node starts from zero
 * @n: node to be inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *last;
	unsigned int node;

	node = 0;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	last = *head;
	if (*head != NULL)
	{
		while (node < (idx - 1))
		{
			last = last->next;
			node++;
		}
		temp->next = last->next;
		last->next = temp;
		return (temp);
	}
	return (NULL);
}

