#include "lists.h"
/**
  * print_listint - prints all the elements of a listint_t list
  * @h: the list
  * Return: number of nodes
  *
  */
size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;
	const listint_t *temp = h;

	while (temp)
	{
		printf("%u\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
