#include "lists.h"

/**
 * delete_dnodeint_at_index - function to delete a node at a certain position
 * @head: address to pointer of first node
 * @index: variable containing position of node to delete
 * Return: 1 if deleted otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{dlistint_t *temp = *head, *temp2;
	unsigned int node;

	if (*head == NULL)
		return (-1);
	if ((*head)->next != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(temp);
			temp = NULL;
			return (1);
		}
		for (node = 0; node < (index); node++)
			temp = temp->next;
		if (temp->next == NULL)
		{
			if (temp == NULL)
				return (-1);
			temp2 = temp->prev;
			temp2->next = NULL;
			free(temp);
			temp = NULL;
			return (1);
		}
		temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
		free(temp);
		temp = NULL;
		return (1);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	return (-1);
}
