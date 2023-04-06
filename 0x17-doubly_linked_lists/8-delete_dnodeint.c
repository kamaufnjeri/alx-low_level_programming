#include "lists.h"

unsigned int length(const dlistint_t *head);

/**
* delete_first - delete first node
* @head: address to pointer of first node
* @index: variable containing position of node to delete
* Return: 1 if deleted otherwise -1
*/
int delete_first(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
/**
* delete_at_index - delete node at index and at end
* @head: pointer to pointer of nodes
* @index: index to delete node
* Return: 1 if successful or -1
*/
int delete_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int node, len;

	len = length(*head);
	if (index > (len - 1))
		return (-1);
	else if (index == (len - 1))
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}
	else if (index < (len - 1))
	{
		temp = *head;
		for (node = 0; node < index; node++)
			temp = temp->next;
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		temp = NULL;
		return (1);
	}
	return (-1);
}
/**
* delete_dnodeint_at_index - function to delete a node at a certain position
*@head: address to pointer of first node
*@index: variable containing position of node to delete
*Return: 1 if deleted otherwise -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		return (delete_first(head, index));

	}
	else if (index > 0)
	{
		return (delete_at_index(head, index));
	}
	return (-1);
}
/**
*length - length of nodes
*@head: pointer to a node
*Return: len of nodes
*/
unsigned int length(const dlistint_t *head)
{
	unsigned int len = 0;

	while (head != NULL)
	{
		head = head->next;
		len++;
	}
	return (len);
}
