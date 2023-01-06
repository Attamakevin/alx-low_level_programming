#include "hash_tables.h"
/**
* hash_table_get - a function that retrieves a value associated with a key
* @ht: hash table
* @key: the key to retrieve the value
* Return: return hash value on success and NULL if it fails
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
