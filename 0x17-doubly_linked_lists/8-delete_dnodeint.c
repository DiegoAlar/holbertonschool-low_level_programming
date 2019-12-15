#include "lists.h"
/**
  * delete_dnodeint_at_index - delete node given an index
  * @head: the pointer of the header
  * @index: the index of node to be deleted
  * Return: 1 on success and -1 when fails
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;
	dlistint_t *temp2;

	if (!head || !(*head))
		return (-1);
	if (!index)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	while (temp->next)
	{
		if (i == (index - 1))
		{
			if (temp->next->next)
			{
				temp2 = temp->next->next;
				free(temp2->prev);
				temp->next = temp2;
				temp2->prev = temp;
			}
			else
			{
				free(temp->next);
				temp->next = NULL;
			}
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
