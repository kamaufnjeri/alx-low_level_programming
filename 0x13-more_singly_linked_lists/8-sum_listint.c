#include "lists.h"

/**
 * sum_listint - Calculates sum of all data (n) of listint_t list.
 * @head: A pointer to head of listint_t list.
 *
 * Return: If list is empty 0.Otherwise - sum of all data.
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
