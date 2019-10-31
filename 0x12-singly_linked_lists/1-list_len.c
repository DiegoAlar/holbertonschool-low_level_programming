#include "lists.h"
/**
  * list_len - function to see number of elements in a LL
  * @h: the head element
  * Return: number of elements of a list
  *
  */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	unsigned int i = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
