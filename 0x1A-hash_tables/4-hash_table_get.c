#include "hash_tables.h"
/**
  * hash_table_get - retrieves value associated to a key
  * @ht: the hash table
  * @key: the key which value will be looked
  * Return: the value associated to key or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *temp;

	if (!ht)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
