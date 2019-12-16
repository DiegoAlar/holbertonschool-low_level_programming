#include "holberton.h"
/**
* _strcmp - compares two strings
* @s1: string to be compared to s2
* @s2: string to be compared to s1
* Return: 0 if the strings are the same
*/
int _strcmp(char *s1, char *s2)
{
	int count = 0, check;

	while (s1[count] != '\0' && s2[count] != '\0')
	{
		check = s1[count] - s2[count];
		if (check != 0)
			return (check);
		count++;

	}
	return (check);
}
