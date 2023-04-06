#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert a node at certain index
 * @h: pointer to address of first pointer in a list
 * @idx: position to insert node
 * @n: value to be inserted
 * Return: NULL if it fails or address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *temp2;
	unsigned int node;

	temp = temp2 = NULL;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	temp2 = temp->next;
	temp->next = new;
	new->prev = temp;
	new->next = temp2;
	temp2->prev = new;
	return (new);
}


