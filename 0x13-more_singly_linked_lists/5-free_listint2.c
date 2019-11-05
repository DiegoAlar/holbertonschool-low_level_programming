#include "lists.h"
/**
  * free_listint2 - function that frees a listint_t list.
  * @head: ptr to head ptr
  *
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (*head == NULL)
		return;
	while (temp)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
