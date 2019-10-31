#include "lists.h"

/**
  * print_list - function that prints elements of a linked list
  * @h: pointer to the head of list
  * Return: the number of nodes
  *
  */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	unsigned int i = 0;

	while (temp != NULL)
	{
		(temp->str == NULL) ? printf("[0] (nil)\n") : printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
