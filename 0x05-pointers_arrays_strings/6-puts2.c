#include "holberton.h"

/**
  * _strlen - returns the length of a string
  * @s: is the string to evaluate the size
  * Return: return the number of chars of the array
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	i++;
	return (i);
}

/**
* puts2 - prints every other character of a string
* @str: the string to be printed with changes
*/
void puts2(char *str)
{
	int i = _strlen(str) - 1, init = 2, k = 0;

	while (k <= i)
	{
		_putchar(str[k]);
		k += init;
	}
	_putchar('\n');
}
