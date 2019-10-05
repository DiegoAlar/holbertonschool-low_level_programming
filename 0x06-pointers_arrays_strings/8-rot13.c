#include "holberton.h"
/**
* rot13 - encodes to rot 13
* @s1: string to be encoded
* Return: encoded string
*/
char *rot13(char *s1)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if ((s1[i] > 64 && s1[i] < 91) || (s1[i] > 96 && s1[i] < 123))
		{
			s1[i] -= 13;
			while (s1[i] < 97 && s1[i] > 83)
			{
				s1[i] += 26;
				break;
			}
		}
		i++;
	}
	return (s1);
}




