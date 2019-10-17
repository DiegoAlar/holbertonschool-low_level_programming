#include <stdlib.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * string_nconcat - function that concatenates two strings
  * @s1: first string
  * @s2: string to cancatenate
  * @n: number of chars of s2 to concat
  * Return: pointer to the concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length2, length1, full, i = 0, k = 0;

	length2 = sizeof(s2) + 1;
	length1 = sizeof(s1) + 1;
	if (n >= length2)
	{
		full = length1 + length2;
		s = malloc(sizeof(char) * full);
	}
	else
	{
		full = length1 + n;
		s = malloc(sizeof(char) * full);
	}
	if (s == NULL)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (i <= full)
	{
		s[i] = s2[k];
		k++;
		i++;
	}

return (s);
}
