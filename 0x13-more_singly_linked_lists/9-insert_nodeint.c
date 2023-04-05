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
	unsigned int count = 0;
	listint_t *current_node, *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;

	while (current_node)
	{

		if (count == (idx - 1))
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		count++;
		current_node = current_node->next;
	}
	free(new_node);

	return (NULL);
}
