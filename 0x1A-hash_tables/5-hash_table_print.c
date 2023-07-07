#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table
 * @ht: a pointer to the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag, first;

	if (ht == NULL)
		return;
	printf("{");
	first = 1;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		node = ht->array[i];
		flag = 1;
		for (;;)
		{
			if (!first && flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			if (node->next != NULL)
			{
				flag = 1;
				node = node->next;
			}
			else
				break;
		}
	}
	printf("}\n");
}
