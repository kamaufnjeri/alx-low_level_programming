#include "hash_tables.h"

/**
 * hash_table_get - function to get using the key
 * @ht: hash table to search element
 * @key: key to use to search for element
 * Return: NULL if it fails or the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] != NULL)
	{
		temp = ht->array[i];
		while (strcmp(temp->key, key) != 0)
			temp = temp->next;
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		else
			return (NULL);

	}
	else
		return (NULL);
}
