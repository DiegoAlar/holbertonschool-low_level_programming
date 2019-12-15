#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beginning of list
  * @head: the head of the list
  * @n: number to be added to the new node
  * Return: an updated list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newN;

	if (head == NULL)
		return (NULL);
	newN = malloc(sizeof(dlistint_t));
	if (!newN)
		return (NULL);
	if (*head == NULL)
	{
		newN->n = n;
		newN->prev = NULL;
		newN->next = NULL;
		*head = newN;
		return (*head);
	}
	else
	{
		newN->n = n;
		newN->next = *head;
		newN->prev = *head;
		*head = newN;
	}
	return (*head);

}
