#include "holberton.h"
/**
* _strlen_recursion - returns the length of a string
* @s: string whose size is to be counted
* Return: integer with the size of s
*/
int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s)
	{
		s++;
		return (count + _strlen_recursion(s));
	}
	return (0);
}
