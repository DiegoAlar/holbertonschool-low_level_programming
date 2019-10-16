#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: the withdh parameter
* @height: the height parameter
* Return: a bidimentional array
*/
int **alloc_grid(int width, int height)
{
	int i = 0, q = 0, j, k;
	int **p;

	if (width == 0 || height == 0 || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		p[i] = (malloc(width * sizeof(int)));
		if (p[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}

	}
	for (; q < height; q++)
	{
		for (k = 0; k < width; k++)
		{
			p[q][k] = 0;
		}
	}



	return (p);

}
