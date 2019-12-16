#include "holberton.h"
/**
* _isalpha - checks for alphabetic character
* @c: character to be evaluated if it's alphabet
* Return: returns 1 if parameter is alphabet or 0 if not
*/
int _isalpha(int c)
{
	if ((c > 96) && (c < 123))
	{
		return (1);
	}
	else if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
