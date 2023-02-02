#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newadd, *temp;

	newadd = malloc(sizeof(listint_t));
	if (newadd == NULL)
		return (NULL);

	newadd->n = n;
	newadd->next = NULL;

	if (*head == NULL)
		*head = newadd;
		return (*head);
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newadd;
    return (temp);
	}
}
