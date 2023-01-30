#include "lists.h"

/*
 * list_len -  find the number of elements in a linked list_t list.
 * @*h: linked list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++
		h = h->next;
	}
	return (node);
}
