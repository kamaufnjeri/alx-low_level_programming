#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a node at beginning of a list
 * @head: node to add
 * @n: value of node
 * Return: NULL or address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
		return (temp);
	}
}
