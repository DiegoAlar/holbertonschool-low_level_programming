#include "lists.h"
/**
  * get_nodeint_at_index - returns a node given an index
  * @head: ptr to the list
  * @index: index of node
  * Return: a node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp)
	{
		if (index == i)
		{
			return (temp);
		}
		temp = temp->next;
		i++;

	}
	return (NULL);
}
