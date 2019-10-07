#include "holberton.h"
/**
* _strchr - locates a character in a string.
* @s: string source
* @c: char to be searched
* Return: the changed string
*/
char *_strchr(char *s, char c)
{
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
return ('\0');
}
