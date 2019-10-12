#include "holberton.h"
/**
* _strlen - returns the length of a string
* @s: is the string to evaluate the size
* Return: return the number of chars of the array
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

