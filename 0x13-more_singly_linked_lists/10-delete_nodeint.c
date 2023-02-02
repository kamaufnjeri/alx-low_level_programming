#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of listint_t linked list
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp = *head;
	unsigned int node = 0;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (node < (index - 1))
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
		node++;
	}

	tmp = temp->next;
	temp->next = tmp->next;
	free(tmp);
	return (1);
}
