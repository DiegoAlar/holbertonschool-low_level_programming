#include "holberton.h"
/**
* cap_string - capitalizes initial letters of a string
* @s1: string as argument
* Return: string with changes
*/
char *cap_string(char *s1)
{
	int k = 0;

	while (s1[k] != '\0')
	{
		switch (s1[k])
		{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case 32:
			case 10:
			if ((s1[k + 1] > 96 && s1[k + 1] < 123))
			{
			s1[k + 1] = s1[k + 1] - 32;
			}
			break;

			case 9:
			s1[k] = 32;
			if ((s1[k + 1] > 96 && s1[k + 1] < 123))
			{
				s1[k + 1] = s1[k + 1] - 32;
			}
			break;
		}
		k++;
	}
	return (s1);
}
