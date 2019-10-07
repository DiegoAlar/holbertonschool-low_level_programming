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
	/*s[0] = '\0';*/
	s = "";
return (s);
}
