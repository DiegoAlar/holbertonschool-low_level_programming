#include "holberton.h"

/**
* _strcpy - copies the string pointed to by src
* @dest: pointer to store the value of another ptr
* @src: the source pointer to be copied
* Return: a pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, k = 0;

	while (src[k] != 0)
	{
		k++;
	}

	while (i <= k)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
