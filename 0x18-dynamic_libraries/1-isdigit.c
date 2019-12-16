#include "holberton.h"
/**
* _isdigit - determines if a parameter is a digit
* @c: parameter to be evaluated if it's number
* Return: 1 if parameter or 0 otherwise
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
