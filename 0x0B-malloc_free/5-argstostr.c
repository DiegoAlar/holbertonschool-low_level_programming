#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* argstostr - returns a pointer to a 2 dimensional array of integers.
* @ac: the withdh parameter
* @av: the height parameter
* Return: a bidimentional array
*/
char *argstostr(int ac, char **av)
{
	int i, k = 0, j, c = 0;
	char *ptr;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}
		j = 0;
	}
	j = 0;
	ptr = malloc(c * sizeof(char) + ac + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			*(ptr + k) = av[i][j];
			j++;
			k++;
		}
		*(ptr + k) = '\n';
		j = 0;
		k++;
	}
	*(ptr + k) = '\0';
	return (ptr);
}
