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
* puts_half - prints half of a string
* @str: string to be splitted
*/
void puts_half(char *str)
{
	int length, half;

	length = _strlen(str);
	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length / 2) + 1;

	while (half < length)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');

}

