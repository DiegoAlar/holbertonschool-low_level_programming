#include "holberton.h"
/**
* function -
* @dest: pointer to store the value of another ptr
* @src: the source pointer to be copied
* Return: a pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i < 98)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
