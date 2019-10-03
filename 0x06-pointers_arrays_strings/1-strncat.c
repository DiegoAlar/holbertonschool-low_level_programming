#include "holberton.h"
/**
  * _strcat - appends one string to the other
  * @dest: the string to be merged
  * @param: the string to append
  * @n: numbers of chars to be appended
  * Return: the string with the merged content
  */
char *_strncat(char *dest, char *src, int n)
{
	        int i = 0, k = 0;

		while (dest[i] != '\0')
		{
			i++;
		}
		while (src[k] != '\0' && k < n)
		{
			*(dest + i) = *(src + k);
			k++;
			i++;
		}
		*(dest + i) = '\0';
		return dest;
}
