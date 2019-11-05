#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: ptr to the head ptr
  * Return: the heads node data
  */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int num = 0;

	if (*head == NULL)
		return (num);
	num = temp->n;
	if ((*head)->next == NULL)
		return (num);
	*head = temp->next;
	return (num);
}
