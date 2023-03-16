#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees a linked list
  * @head: The head of the linked list
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp, *h;
	
	h = *head;
	while (h)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
	free(*head);
}
