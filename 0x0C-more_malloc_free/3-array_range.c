#include <stdlib.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * array_range -  creates an array of integers.
  * @min: min num to be printed
  * @max: max number to be printed
  * Return: an array of integers
  */
int *array_range(int min, int max)
{
	int *n;
	int elements = 0, k = 0;

	if (min > max)
		return (NULL);

	elements = (max - min) + 1;
	n = malloc(sizeof(*n) * elements);
	if (n == NULL)
		return (NULL);
	while (min < elements)
	{
		n[k] = min;
		min++;
		k++;
	}
	return (n);
}
