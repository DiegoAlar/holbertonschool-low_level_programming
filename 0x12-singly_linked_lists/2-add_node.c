#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
  * add_node - inserts elements to a linked list
  * @head: direction of the head node
  * @str: string to insert in new node
  * Return: the updated list
  */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *newN = malloc(sizeof(list_t));

	if (newN == NULL)
		return (NULL);
	while (str[i])
		i++;

	newN->str = strdup(str);
	newN->len = i;
	newN->next = *head;
	*head = newN;
	return (newN);
}
