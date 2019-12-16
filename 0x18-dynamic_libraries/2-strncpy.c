#include "holberton.h"
/**
* _strncpy - copies a string
* @dest: this is the string to be changed
* @src: string to append to the other
* @n: number of letters of string to pass
* Return: the cahnged string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, k = 0, count = 0;

	while (src[count] != '\0')
	{
		count++;
	}
	while (src[k] != '\0' && k < n)
	{
		*(dest + i) = *(src + k);
		k++;
		i++;
	}
	if (count < n)
	{
		while (k != n)
		{
			*(dest + i) = '\0';
			i++;
			k++;
		}
	}


	return (dest);
}

