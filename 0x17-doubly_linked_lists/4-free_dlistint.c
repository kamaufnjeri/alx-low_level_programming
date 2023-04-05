#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function to free nodes
 * @head: pointer to the first node of dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp; /**tail*/

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
