#include "holberton.h"
/**
* _strchr - locates a character in a string.
* @s: string source
* @c: char to be searched
* Return: the changed string
*/
char *_strchr(char *s, char c)
{
	int i = 0, k;

	if (s[0] == c)
	{
		return (s);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			for (k = 0; k < i; k++)
			{
				s++;
			}
			return (s);
		}

		i++;
	}
return (s = '\0');
}
