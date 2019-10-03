#include "holberton.h"
/**
* _strcat - appends one string to the other
* @dest: the string to be merged
* @param: the string to append
* Return: the string with the merged content
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, k = 0;

	while (dest[i] != 32)
	{
		i++;
	}
	while (src[k] != 0)
	{
		i++;
		dest[i] = src[k];
		k++;
	}
	i++;
	dest[i] = src[k];
	return dest;
}
