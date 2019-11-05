#include "lists.h"
/**
  * add_nodeint_end - function that adds a new node at the end of a list
  * @head: list
  * @n: number to be added as n atribute in node
  * Return: an updated list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newN = (listint_t *) malloc(sizeof(listint_t));

	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->next = NULL;
	if (*head == NULL)
	{
		*head = newN;
		return (newN);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newN;
		return (*head);
	}
}
