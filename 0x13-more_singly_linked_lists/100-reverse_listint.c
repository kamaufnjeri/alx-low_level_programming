#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to address of head of list_t list.
 *
 * Return: A pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL, *end = NULL;

	if (head)
	{
		while (*head != NULL)
		{
			start = (*head)->next;
			(*head)->next = end;
			end = *head;
			*head = start;
		}
		*head = end;
		return (*head);
	}
	return (NULL);
}
