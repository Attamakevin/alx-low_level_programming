#include "hash_tables.h"
/**
* hash_table_print - a function to print hash table
* @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	int flag = 0;
	hash_node_t *node;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			if (flag == 1)
				printf(", ");
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
		flag = 1;
		}
	printf("}\n");
}
