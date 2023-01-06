#include "hash_tables.h"
/**
* key_index - function to return the index of a key
* @key: the key of the hash table
* @size: the size of the hash table
* Return: return the index of a key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
