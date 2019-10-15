#include <stdlib.h>
#include "holberton.h"

/**
* create_array - creates an array of chars
* @size: size of the array to return
* @c: char to fill in the elemet's array
* Return: null if the size and the pointer in zero or the pointer's array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
