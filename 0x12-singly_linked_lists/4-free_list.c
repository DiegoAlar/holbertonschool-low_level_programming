#include "lists.h"
#include <stdlib.h>
/**
  * free_list - frees a linked list
  * @head: linked list to be freed
  *
  */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
