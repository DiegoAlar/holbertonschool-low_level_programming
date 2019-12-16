#include "holberton.h"
/**
* _memcpy - function that copies memory area.
* @src: data to be copied in dest
* @n: the times to copy the data
* @dest: the string to be changed
* Return: the changed string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
