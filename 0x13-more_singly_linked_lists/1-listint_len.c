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
