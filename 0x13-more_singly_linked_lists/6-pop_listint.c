#include "lists.h"
/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: ptr to the head ptr
  * Return: the heads node data
  */
int pop_listint(listint_t **head)
{
	int num = 0;

	if (*head == NULL)
		return (num);
	num = (*head)->n;
	*head = (*head)->next;
	return (num);
}
