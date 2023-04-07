#include "hash_tables.h"

/**
 * hash_table_print - a function print elements in sorted order in hash table
 * @ht: hash table with elements;
 */
void hash_table_print(const hash_table_t *ht)
{
	int k = 0;
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp != NULL)
		{
			for (; temp; )
			{
				if (k == 1)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			k = 1;
			}
		}
	}
	printf("}\n");
}
