#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints numbers of arr given a number
* @a: the array parameter
* @n: the number of objects of the array to print
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != (n - 1))
		{
			printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}

		i++;
	}
	printf("\n");
}
