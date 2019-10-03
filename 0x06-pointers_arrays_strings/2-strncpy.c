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
		if (count < n)
		{
			if (src[k + 1] == '\0' )
			{
				while (k != n)
				{
					dest[k] = '\0';
					k++;
				}
			}
			else
			{
				*(dest + i) = *(src + k);
				k++;
				i++;
			}
		}
		else
		{
			*(dest + i) = *(src + k);
			k++;
			i++;
		}
	}
	return (dest);
}

