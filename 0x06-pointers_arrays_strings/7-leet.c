#include "holberton.h"
/**
* leet - encodes strint to 1337
* @s1: string to be encripted
* Return: the changed string
*/
char *leet(char *s1)
{
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";
	int i = 0, k;

	while (s1[i] != '\0')
	{
		for (k = 0; str1[k] != '\0'; k++)
		{
			if (str1[k] == s1[i])
			{
				s1[i] = str2[k];
			}
		}
		i++;
	}
return (s1);
}
