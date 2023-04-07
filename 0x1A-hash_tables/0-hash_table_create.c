#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hashtable
 * Return: pointer to the newly created hash table or null if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

