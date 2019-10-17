#include <stdlib.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: number to evaluate memory
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	return (num);
}
