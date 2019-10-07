#include "holberton.h"
/**
* _strchr - locates a character in a string.
* @s: string source
* @c: char to be searched
* Return: the changed string
*/
char *_strchr(char *s, char c)
{
	char *a;

	a = s;
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	s = a;
return (s = '\0');
}
