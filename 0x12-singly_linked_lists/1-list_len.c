#include "lists.h"

/*
 * list_len -  returns the number of elements in a linked list_t list.
 * @*h: linked list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++
	}
	return (node);
}
