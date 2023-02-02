#include "stdio.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: The head of the linked list
 * @n: The value to add to the new node
 *
 * Return: The address of the new element, or NULL it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newadd;

	newadd = malloc(sizeof(listint_t));

	if (newadd == NULL)
		return (NULL);

	addnew->n = n;
	newadd->next = *head;
	*head = newadd;
	return (newadd);
}
