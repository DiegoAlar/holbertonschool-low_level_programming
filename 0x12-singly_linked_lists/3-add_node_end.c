#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * add_node_end - adds node at the end of list
  * @head: the direction of the linked list
  * @str: a string to insert in a node
  * Return: the updated linked list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));
	int i = 0;

	if (newN == NULL)
		return (NULL);
	while (str[i])
		i++;
	if (*head == NULL)
	{
		newN->str = strdup(str);
		newN->len = i;
		newN->next = NULL;
		*head = newN;
		return (newN);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newN->str = strdup(str);
		newN->len = i;
		newN->next = NULL;
		temp->next = newN;
		return (*head);
	}

}
