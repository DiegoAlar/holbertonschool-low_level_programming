#include "lists.h"
/**
  * sum_listint - Write a function that returns the sum
  * @head: ptr to the list
  * Return: the sum
  *
  */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int addition = 0;

	if (!head)
		return (addition);
	temp = head;
	do	{
		addition += temp->n;
		temp = temp->next; }
	while (temp);
	return (addition);
}
