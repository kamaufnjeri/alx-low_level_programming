#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *dupl;

	while (str[len] != '\0')
		len++;
	dupl = malloc(sizeof(list_t));
	dupl->str = strdup(str);
	if (dupl == NULL)
	{
		return (NULL);
	}
	dupl->len = len;
	dupl->next = *head;
	*head = dupl;
	return (dupl);
}
