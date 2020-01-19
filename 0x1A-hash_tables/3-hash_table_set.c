#include "hash_tables.h"

/**
  * add_node - adds node at the begining of list
  * @head: the direction of the linked list
  * @str_key: a string to insert in a node representing the key
  * @str_value: a string to be inserted in the node (value)
  * Return: the updated linked list
  */
int add_node(hash_node_t **head, const char *str_key, const char *str_value)
{
	hash_node_t *temp = *head;
	hash_node_t *newN = malloc(sizeof(hash_node_t));

	if (newN == NULL)
		return (0);
	while (temp)
	{
		if (!strcmp(temp->key, str_key))
		{
			free(temp->value);
			temp->value = strdup(str_value);
			return (1);
		}
		temp = temp->next;
	}

	newN->key = strdup(str_key);
	newN->value = strdup(str_value);
	newN->next = *head;
	*head = newN;
	return (1);
}

/**
  * hash_table_set -  function that adds an element to the hash table.
  * @ht: the hash table
  * @key: is the key
  * @value: is the value associated to the key
  * Return: a if succedded or 0 if it failed
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;

	if (!strcmp(key, ""))
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (add_node(&(ht->array[idx]), key, value) == 0)
		return (0);
	return (1);
}
