#include "lists.h"
/**
  * get_dnodeint_at_index - returns nth node given index
  * @head: the pointer to first element of the list
  * @index: number of node to return
  * Return: the node searched given index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
