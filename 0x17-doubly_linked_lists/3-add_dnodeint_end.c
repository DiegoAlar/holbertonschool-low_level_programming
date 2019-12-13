#include "lists.h"
/**
  * add_dnodeint_end - inserts node at the end of list
  * @head: the list pointer
  * @n: number to be inserted
  * Return: an updated list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newN;
	dlistint_t *temp;

	newN = malloc(sizeof(dlistint_t));
	if (!newN || head == NULL)
		return (NULL);
	temp = *head;
	if (*head == NULL)
	{
		newN->n = n;
		newN->next = NULL;
		newN->prev = NULL;
		*head = newN;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;
	newN->n = n;
	newN->next = NULL;
	newN->prev = temp->next;
	temp->next = newN;
	return (*head);
}
