#include "holberton.h"
/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string to search the charracters of accept
* @accept: characters to search in s
* Return: the resulting string
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, k;

	for (; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[i])
			{
				s += i;
				return (s);
			}
		}
	}
	return ('\0');
}
