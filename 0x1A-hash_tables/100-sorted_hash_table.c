#include "hash_tables.h"

/**
 * shash_hash_table_create - creates  hash tavble
 * @size: size of the hash table
 * Return: hashtable or NULL if not created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned int a;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (a = 0; a < ht->size; a++)
	{
		ht->array[a] = NULL;
	}
	ht->shead = ht->stail = NULL;
	return (ht);
}

/**
 * create_nod - creates node
 * @ht: hashtable to insert node
 * @key: key to insert value
 * @value: value to insert
 * Return: node created or NULL
 */
/**shash_node_t *create_nod(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *temp, *new;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (NULL);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	new->snext = NULL;
	new->sprev = NULL;
	return (new);
}*/
/**
 * shash_table_set - set a sorted hash table
 * @ht: hashtable to insert node
 * @key: key to insert value
 * @value: value to insert
 * Return: node created or NULL
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{/**
	shash_node_t *temp, *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	new = create_nod(ht, key, value);
	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		return (1);
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
		return (1);
	}
	else
	{
		temp = ht->stail;
		if (strcmp(temp->key, key) < 0)
		{
			temp->snext = new;
			new->sprev = temp;
			ht->stail = new;
			return (1);
		}
		else
		{
			while (temp->sprev != NULL && strcmp(temp->key, key) > 0)
				temp = temp->sprev;
			new->sprev = temp;
			new->snext = temp->snext;
			temp->snext->sprev = new;
			temp->snext = new;
			return (1);
		}
	}
	return (0);*/
	shash_node_t *new, *tmp;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}

	return (1);
}
/**
 * shash_table_get - get a node at a certain index
 * @ht: hashtable
 * @key: key
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned int index;
	shash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	temp = ht->array[index];
	while(strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (strcmp(temp->key, key) == 0)
		return (temp->value);
	return (NULL);
}
/**
 * shash_table_delete - deletes hash table
 * @ht: hashtable
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *tmp;

	if (ht == NULL)
		return;
	temp = ht->shead;
	while (temp != NULL)
	{
		tmp = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = tmp;
	}
	free(ht);
}
/**
 * shash_table_print - print nodes in sorted order of a hashtable
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	int k = 0;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		if (k == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		k = 1;
	}
	printf("}\n");
}
/**
 * shash_table_print_prev - print in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int k = 0;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node)
	{
		if (k == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		k = 1;
	}
	printf("}\n");
}
