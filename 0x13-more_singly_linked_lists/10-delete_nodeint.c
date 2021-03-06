#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * @h: the list
 * Return: the length of a list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: ptr to head ptr
  * @index: index of node to be deleted
  * Return: 1 if succeded or o if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *newN;

	if (*head == NULL || head == NULL || (listint_len(*head) - 1) < index)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		newN = (*head)->next;
		free(*head);
		*head = newN;
		return (1);
	}
	while (count < (index - 1))
	{
		count++;
		temp = temp->next;
	}
	newN = temp->next;
	if (newN->next == NULL)
	{
		temp->next = NULL;
		free(newN);
	}
	else
	{
		temp->next = newN->next;
		free(newN);
	}
	return (1);
}
