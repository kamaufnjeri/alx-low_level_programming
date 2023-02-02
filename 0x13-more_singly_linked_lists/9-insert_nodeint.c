#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: 
 * @n: The integer for the new node to contain.
 *
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newadd, *temp = *head;
	unsigned int node = 0;

	newadd = malloc(sizeof(listint_t));
	if (newadd == NULL)
		return (NULL);

	newadd->n = n;

	if (idx == 0)
	{
		newadd->next = temp;
		*head = newadd;
		return (newadd);
	}

	while (node < (idx - 1))
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
    node++
	}

	newadd->next = temp->next;
	temp->next = newadd;

	return (newadd);
}
