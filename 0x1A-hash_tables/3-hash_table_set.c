#include <stdlib.h>
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
	hash_node_t *temp;

	index = key_index((unsigned char *)key, ht->size);
	if (key == NULL || value == NULL || *key == '\0' || ht == NULL)
		return (0);
	if (ht->array[index] && (strcmp(ht->array[index]->key, key) == 0))
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
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

