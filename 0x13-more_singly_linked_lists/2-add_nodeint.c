#include "lists.h"
/**
  * add_nodeint - function that adds a new node at the beginning
  * @head: p to p of head
  * @n: value to be inserted in n atribute of the node
  * Return: the updated list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newN = (listint_t *) malloc(sizeof(listint_t));

	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->next = *head;
	*head = newN;
	return (newN);
}
