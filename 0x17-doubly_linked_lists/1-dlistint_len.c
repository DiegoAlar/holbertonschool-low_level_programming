#include "lists.h"
/**
  * dlistint_len - returns the number of elements in a list
  * @h: header pointer of the list
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
