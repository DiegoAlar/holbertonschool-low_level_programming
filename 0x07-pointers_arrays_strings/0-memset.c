#include "holberton.h"
/**
* _memset - fills memory with a constant byte
* @b: value of contant byte
* @n: number of times to copy b
* @s: the string buffer
* Return: returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
