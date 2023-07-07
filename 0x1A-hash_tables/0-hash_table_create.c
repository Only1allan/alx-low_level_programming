#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hashtable
 * @size: size of the hashtable to be created
 * Return: pointer to newly created hashtable
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i;

	hashtable = malloc(sizeof(hash_table_t));
    if (hashtable == NULL)
    {
        return (NULL);
    }
	hashtable->array = malloc(sizeof(hash_node_t) * size);
    if (hashtable->array == NULL)
    {
        return (NULL);
    }

	for (i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}

