#include "hash_tables.h"
/**
 * hash_table_get - a functions that gets value at a certain index
 * @ht: pointer to the hashtable
 * @key: key to look for a particular value
 * Return: value extracted from a particlar key
 */
char *hash_table_get(const hash_table_t  *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	slot = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[slot] == NULL)
		return (NULL);
	node = (ht->array[slot]);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
