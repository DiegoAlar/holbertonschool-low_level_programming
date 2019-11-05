#include "lists.h"
/**
  * free_listint2 - function that frees a listint_t list.
  * @head: ptr to head ptr
  *
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	head = NULL;
}
