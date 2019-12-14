#include "lists.h"
/**
  * sum_dlistint - returns the sum of the lists elms
  * @head: the  head pointer to the list
  * Return: an integer corresponding to sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
