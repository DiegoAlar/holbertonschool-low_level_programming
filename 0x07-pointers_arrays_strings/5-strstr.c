#include "holberton.h"
/**
* _strstr - finds the first occurrence of the substring needle
* @needle: substring
* @haystack: original string
* Return: return the changed string
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, k = 0;

	for (; haystack[i] != '0'; i++)
	{
		for (k = 0; needle[k] != '0'; k++)
		{
			if (needle[k] == haystack[i])
			{
				haystack += i;
				return (haystack);
			}
			else
			{
				break;
			}
		}
	}
	return ('\0');
}
