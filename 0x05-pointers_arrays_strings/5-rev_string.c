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
* rev_string - function that reverses a string.
* @s: string to be reverted
*/
void rev_string(char *s)
{
	int i, c, k = 0;
	char temp;

	i = _strlen(s) - 1;
	c = i / 2;
	while (i > c)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
		k++;
		i--;
	}

}
