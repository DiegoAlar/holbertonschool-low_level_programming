#include "holberton.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: original string
* @accept: string to evaluate individually
* Return: the number of appearances
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i, k, acum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			count = 0;
			if (accept[k] == s[i])
			{
				count++;
				break;
			}

		}
		acum += count;
		if (count == 0)
			return (acum);
	}

	return (acum);
}
