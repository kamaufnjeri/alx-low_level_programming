#include "lists.h"

/**
 * sum_dlistint - function that adds all node data
 * @head: pointer to the first node in list
 * Return: 0 if list is empty or sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
