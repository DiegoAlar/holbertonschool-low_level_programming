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
* print_rev - prints a string in reverse
* @s: string to be reserved
*/
void print_rev(char *s)
{

	int i;

	i = _strlen(s) - 1;

	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
