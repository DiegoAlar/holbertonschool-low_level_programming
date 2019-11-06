#include "lists.h"
/**
  * reverse_listint - function that reverses a listint_t linked list
  * @head: ptr to head ptr
  * Return: the reversed list
  *
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n, *c, *p;

	if (*head == NULL || head == NULL)
		return (NULL);
	while (c != NULL)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	*head = p;
	return (*head);
}
