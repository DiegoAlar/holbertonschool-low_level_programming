#include "holberton.h"
/**
* _isupper - finds out if the parameter is upper
* @c: letter to be evaluated if it's upper
* Return: 1 if c is upper 0 otherwise
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
