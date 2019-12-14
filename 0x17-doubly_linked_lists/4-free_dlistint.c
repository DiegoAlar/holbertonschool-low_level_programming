#include "lists.h"
/**
  * free_dlistint - frees a list
  * @head: the head pointer
  */
void free_dlistint(dlistint_t *head)
{

	if (head == NULL)
		return;
	/*while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);*/

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
