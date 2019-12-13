#include "lists.h"
/**
  * print_dlistint - prints a double linked list
  * @h: the list
  * Return: the number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
