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
	unsigned int length2 = 0, length1 = 0, full, i = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1])
	{
		length1++;
	}
	while (s2[length2])
	{
		length2++;
	}
	if (n >= length2)
	{
		full = length1 + length2;
	}
	else
	{
		full = length1 + n;
	}
	s = malloc(sizeof(char) * (full + 1));
	if (s == NULL)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (i < full)
	{
		s[i] = s2[k];
		k++;
		i++;
	}
	s[i] = '\0';
return (s);
}
