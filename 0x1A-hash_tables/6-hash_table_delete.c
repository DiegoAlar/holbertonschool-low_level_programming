#include "hash_tables.h"

/**
  * hash_table_delete - deletes a hash table
  * @ht: the hash table to be deleted
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cont = 0;
	hash_node_t *temp, *temp2;

	if (!ht)
		return;
	for (; cont < ht->size; cont++)
	{
		if (!ht->array[cont])
			continue;
		temp = ht->array[cont];
		while (temp)
		{
			temp2 = temp;
			temp = temp->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}

	}
	free(ht->array);
	free(ht);
}

