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
	int i = 0, k = 0;

	/*while (dest[i] != '\0')
	{
		i++;
	}*/
	while (src[k] != '\0' && k < n)
	{
		*(dest + i) = *(src + k);
		k++;
		i++;
	}
	/*(dest + i) = '\0';*/
	return (dest);
}

