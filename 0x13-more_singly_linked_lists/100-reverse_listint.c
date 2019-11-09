#include "lists.h"
/**
  * reverse_listint - function that reverses a listint_t linked list
  * @head: ptr to head ptr
  * Return: the reversed list
  *
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL, *a = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		a = *head;
		*head = (*head)->next;
		a->next = n;
		n = a;

	}
	*head = n;
	return (*head);
}
