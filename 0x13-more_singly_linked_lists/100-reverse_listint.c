#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to address of head of list_t list.
 *
 * Return: A pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *begin, *end;

	if (head == NULL || *head == NULL)
		return (NULL);

	end = NULL;

	for (; (*head)->next != NULL; )
	{
		begin = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = begin;
	}

	(*head)->next = end;

	return (*head);
}
