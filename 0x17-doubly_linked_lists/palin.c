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
/**
  *
  *
  *
  */
unsigned int find_pal(dlistint_t *head, unsigned int num)
{
	dlistint_t *h2 = head;
	dlistint_t *tail = head;
	unsigned int res = 0;
	int rounds = 1;

	while (tail->next)
		tail = tail->next;
	while ((tail->n == h2->n) && h2)
	{
		if (rounds == 3)
		{
			return (num);
		}
		h2 = h2->next;
		tail = tail->prev;
		rounds++;
	}
	return (0);

}

/**
  * add_dnodeint - adds a new node at the beginning of list
  * @head: the head of the list
  * @n: number to be added to the new node
  * Return: an updated list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newN;

	if (head == NULL)
		return (NULL);
	newN = malloc(sizeof(dlistint_t));
	if (!newN)
		return (NULL);
	if (*head == NULL)
	{
		newN->n = n;
		newN->prev = NULL;
		newN->next = NULL;
		*head = newN;
		return (newN);
	}
	else
	{
		if ((*head)->prev == NULL)
		{
			newN->n = n;
			newN->next = *head;
			newN->prev = NULL;
			(*head)->prev = newN;
			*head = newN;
		}
		else
			return (NULL);
	}
	return (newN);
}


/**
 * free_dlistint - frees a list
 * @head: the head pointer
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
/**
  *
  *
  *
  */
void add_to_list(unsigned int n, dlistint_t **head)
{
	unsigned int new = n;

	if ((new / 10) > 0)
	       add_to_list((new / 10), head);
	/*while ((new / 10) > 0)
	{

		add_dnodeint(head, (new % 10));
		new = new / 10;
	}*/

	add_dnodeint(head, (new % 10));
}
/**
  * main - check the code for Holberton School students.
  *
  * Return: Always EXIT_SUCCESS.
  */
int main(void)
{
	dlistint_t *head;
	unsigned int num1 = 100;
	unsigned int num2 = 100;
	unsigned int res = 0;
	unsigned int biggest = 0;
	unsigned int actual = 0;

	head = NULL;
	while (num1 < 1000)
	{
		while (num2 < 1000)
		{
			res = num1 * num2;
			add_to_list(res, &head);
			biggest = find_pal(head, res);
			if (biggest > actual)
				actual = biggest;
			res = 0;
			free_dlistint(head);
			head = NULL;
			num2 += 1;
		}
		num2 = 10;
		num1 += 1;
	}

	printf("biggest number: %d\n", actual);

	return (EXIT_SUCCESS);
}

