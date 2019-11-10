#include "lists.h"
/**
  * print_listint_safe - prints a linked list
  * @head: the listed link
  * Return: number of nodes of list
  *
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *temp = head;
	int flag = 1;

	if (!head)
		exit(98);
	while (temp && flag)
	{
		printf("[%p] %d\n", (void *) &temp->n, temp->n);
		temp = temp->next;
		n++;
		if (temp && temp->next)
		{
			if (temp < temp->next)
			{
				flag = 0;
				printf("[%p] %d\n", (void *) &temp->n, temp->n);
				temp = temp->next;
				printf("-> [%p] %d\n", (void *) &temp->n, temp->n);
			}

		}
	}
	return (n);
}
