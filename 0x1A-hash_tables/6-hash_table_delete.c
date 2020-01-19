#include "hash_tables.h"

/**
  * free_list - frees a linked list
  * @head: linked list to be freed
  *
  */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
	free(head);
}

/**
  * hash_table_delete - deletes a hash table
  * @ht: the hash table to be deleted
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cont = 0;
	hash_node_t *temp;

	if (ht != NULL)
	{
		for (; cont < ht->size; cont++)
		{
			if (ht->array[cont] != NULL)
			{
				temp = ht->array[cont];
				free_list(temp);
			}
		}
		free(ht->array);
		free(ht);
	}
}
