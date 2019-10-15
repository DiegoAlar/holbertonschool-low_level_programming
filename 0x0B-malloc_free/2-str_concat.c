#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
* str_concat - function that concatenates two strings.
* @s1: string to concatanate to s2
* @s2: string to concatenate to s2
* Return: a concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, k = 0, q = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	if (s2 == NULL)
		s2 = "";
	while (s2[k] != '\0')
	{
		k++;
	}
	k++;

	s = malloc(sizeof(char) * (i + k));
	if (s == NULL)
		return (NULL);
	for (; q < i; q++)
	{
		s[q] = s1[q];
	}
	for (; l <= k; l++)
	{
		s[q] = s2[l];
		q++;
	}
	return (s);
}
