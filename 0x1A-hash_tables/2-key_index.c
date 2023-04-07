#include "hash_tables.h"

/**
 * key_index - function to find index of hash table key and value
 * @key: the key used to access value
 * @size: size of array in the hash table
 * Return: index of the key/value stored in hashtable array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	else
		return (hash_djb2(key) % size);
}
