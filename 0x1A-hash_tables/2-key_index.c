#include "hash_tables.h"
/**
 * key_index - function that gives value of a particluar key
 * @key: the key in question
 * @size: size of the hashtable array
 * Return: index at which keyvalue pair is stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int slot;

	slot = hash_djb2(key);
	return (slot % size);
}
