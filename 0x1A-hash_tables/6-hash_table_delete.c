#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: a pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *previous;
	hash_table_t *head;
	unsigned long int i;

	head = ht;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				previous = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = previous;
			}
		}
	}
	free(head->array);
	free(head);
}
