#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - function to add an element to a hash table
 * @ht: hash table to add element
 * @key: is the key to access value
 * @value: value to add associated with the key
 * Return: 1 if it succeeds or 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp, *current;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current && (strcmp(current->key, key) == 0))
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
