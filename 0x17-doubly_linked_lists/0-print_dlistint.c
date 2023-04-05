#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function to print integers in a double link
 * @h: node with element to be printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
