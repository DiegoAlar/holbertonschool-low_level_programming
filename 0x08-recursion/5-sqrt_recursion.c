#include "holberton.h"

/**
* compare - the sqrt of .
* @n: number to loook for sqrt
* @acum: parameter to be squared
* Return: the natural square root of n
*/
int compare(int n, int acum)
{
	if (acum * acum == n)
		return (acum);
	else if (acum * acum > n)
		return (-1);
	return (compare(n, (acum + 1)));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to loook for sqrt
* Return: the natural square root of n
*/
int _sqrt_recursion(int n)
{
	return (compare(n, 1));
}
