#include "hash_tables.h"

/**
  * hash_table_create - function that creates a hash table
  * @size: the size of the array
  * Return: a pointer to the newly created hash table
  *
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	if (size < 1)
		return (NULL);
	hash_t = malloc(sizeof(hash_table_t));
	if (!hash_t)
		return (NULL);
	hash_t->size = size;
	hash_t->array = calloc(size, sizeof(hash_node_t *));
	if (!hash_t->array)
	{
		free(hash_t);
		return (NULL);
	}
	return (hash_t);
}
