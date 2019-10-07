#include "holberton.h"
/**
* _strchr - locates a character in a string.
* @s: string source
* @c: char to be searched
* Return: the changed string
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
		i++;
	}
return ('\0');
}
