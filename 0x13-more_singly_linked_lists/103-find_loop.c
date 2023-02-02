#include "lists.h"

/**
 * find_listint_loop - Finds loop contained in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.Otherwise - address of node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start, *stop;

	if (head == NULL || head->next == NULL)
		return (NULL);

	start = head->next;
	stop = (head->next)->next;

	for (; stop; ) 
	{
		if (start == stop)
		{
			start = head;

			for (; start != stop; )
			{
				start = start->next;
				stop = stop->next;
			}

			return (start);
		}

		start = start->next;
		stop = (stop->next)->next;
	}

	return (NULL);
}
