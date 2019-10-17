#include <stdlib.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * _calloc - allocates memory for an array,
  * @nmemb: elements of size bytes
  * @size: size of the type
  * Return: pointer of allocated memory with nmemb * size
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int res = 0, i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	res = nmemb * size;
	n = malloc(res);
	if (n == NULL)
		return (NULL);
	while (i < res)
	{
		n[i] = 0;
		i++;
	}

return (n);
}
