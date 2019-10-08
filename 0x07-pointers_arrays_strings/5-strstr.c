#include "holberton.h"
/**
* _strstr - finds the first occurrence of the substring needle
* @needle: substring
* @haystack: original string
* Return: return the changed string
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, k, count = 0;

	while (haystack[i] != '\0')
	{
		k = 0;
		count = i;
		while (needle[k] != '\0' && haystack[i] != '\0' && needle[k] == haystack[i])
		{
			k++;
			count++;
		}
		if (needle[k] == '\0')
		{
			return (haystack + count);
		}
		i = count + 1;
	}
	return ('\0');
}

