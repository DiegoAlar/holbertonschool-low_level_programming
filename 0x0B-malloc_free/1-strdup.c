#include <stdlib.h>
#include "holberton.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory
* @str: string to be copied
* Return: null if the size and the pointer in zero or the pointer's array
*/
char *_strdup(char *str)
{
	char *s2;
	int i = 0, k = 0;

	if (str[i] == '\0')
		return (NULL);
	while (str[i] != '\0')
		i++;
	i++;

	s2 = malloc(sizeof(char) * i);
	if (s2 == NULL)
		return (NULL);
	for (; k <= i; k++)
		s2[k] = str[k];
	return (s2);
}
