#include "hash_tables.h"
/**
 * hash_table_set - add an element in a hash table
 * @ht: a pointer to the hash table
 * @key: the key to add
 * @value: the value assocaited with key
 * Return: 0 on failure and 1 success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;
	hash_node_t *new;
	char *valuecopy;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);
	valuecopy = strdup(value);
	if (valuecopy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valuecopy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(valuecopy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = valuecopy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
