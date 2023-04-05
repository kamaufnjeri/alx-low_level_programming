#include "lists.h"

/**
 * get_dnodeint_at_index - fuunction that returns data at index
 * @head: pointer to the first node
 * @index: position of node to be returned
 * Return: the node at index or NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
