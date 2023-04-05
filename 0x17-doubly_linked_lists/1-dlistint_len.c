#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns number of nodes
 * @h: nodes in a linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
