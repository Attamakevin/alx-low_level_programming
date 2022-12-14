#include "hash_tables.h"

/**
* hash_table_create - function to create a hash table
* @size: size of the hash table
* Return: return a pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_table_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
