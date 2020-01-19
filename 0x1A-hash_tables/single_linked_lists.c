#include "hash_tables.h"
/**
  * add_node_end - adds node at the end of list
  * @head: the direction of the linked list
  * @str: a string to insert in a node
  * Return: the updated linked list
  */
hash_node_t *add_node_end(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newN = malloc(sizeof(list_t));
	hash_node_t *temp;

	if (newN == NULL)
		return (0);
	if (*head == NULL)
	{
		newN->key = key;
		newN->value = strdup(value);
		newN->next = NULL;
		*head = newN;
		return (1);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newN->key = key;
		newN->value = strdup(value);
		newN->next = NULL;
		temp->next = newN;
		return (1);
	}

}
