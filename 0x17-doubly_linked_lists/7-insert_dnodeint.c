#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node given a position
  * @h: the direction of the head pointer
  * @idx: position of node to insert
  * @n: number to insert in node
  * Return: an updated list
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp;
	dlistint_t *temp2 = NULL;
	dlistint_t *newN;

	if (!h)
		return (NULL);
	newN = malloc(sizeof(dlistint_t));
	if (!newN)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp->next)
	{
		if (i == (idx - 1))
			if (temp->next)
			{
				temp2 = temp->next;
				break;
			}
		temp = temp->next;
		i++;
	}
	if (temp2)
	{
		newN->n = n;
		newN->next = temp2;
		newN->prev = temp;
		temp->next = newN;
		temp2->prev = newN;
		return (*h);
	}
	if (idx == (i + 1))
		return (add_dnodeint_end(h, n));
	else
		return (NULL);
}
