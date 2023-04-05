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
	unsigned int node;
	listint_t *temp, *new;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else if (index > 0)
	{
		for (node = 0; node < (index - 1); node++)
		{
			if (temp->next == NULL)
			{
				return (-1);
			}
			temp = temp->next;
		}
		new = temp->next;
		temp->next = new->next;
		free(new);
		return (1);
	}
	return (-1);
}
