#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to address of head of listint_t list.
 *
 * Return: If linked list is empty - 0.Otherwise - head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_del;

	temp = *head;
	node_del = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (node_del);
}
