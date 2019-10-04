#include "holberton.h"
/**
* string_toupper - this function turns every str to upper
* @s1: string to change
* Return: string changed to upper
*/
char *string_toupper(char *s1)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] > 96 && s1[i] < 123)
			s1[i] -= 32;
		i++;

	}
	return (s1);
}
