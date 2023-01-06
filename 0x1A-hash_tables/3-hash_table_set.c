#include "hash_table.h"
/**
* hash_table_set - a function to add element to the hash table
* @ht: hash table
* @key: the key string
* @value: the value at key index
* Return: return 1  on success and 0 if fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0;
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
return (1);
}
