#include "lists.h"
/**
  * insert_nodeint_at_index -  inserts a new node at a given position.
  * @head: ptr to head ptr
  * @idx: index
  * @n: parameter in n atribute in the new node
  * Return: an updated list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int countElemts = 0, position = 1;
	listint_t *temp = (listint_t *) malloc(sizeof(listint_t));
	listint_t *temp2 = (listint_t *) malloc(sizeof(listint_t));
	listint_t *newN = (listint_t *) malloc(sizeof(listint_t));

	if (*head == NULL || newN == NULL)
		return (NULL);
	newN->n = n;
	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
		return (newN);
	}
	temp = *head;
	while (temp)
	{
		temp = temp->next;
		countElemts++;
	}
	/*if (countElemts == idx)
	{
		newN->next = NULL;
		temp->next = newN;
		return (newN);
	}
	if (countElemts < idx)
		return (NULL);*/
	temp = *head;
	while (position != idx)
	{
		position++;
		temp = temp->next;
	}
	temp2 = temp->next;
	newN->next = temp2;
	temp->next = newN;
	return (newN);
}
