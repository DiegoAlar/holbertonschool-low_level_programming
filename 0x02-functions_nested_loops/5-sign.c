#include "holberton.h"
/**
* print_sign - it prints the sign of a number
* @n: the number to review if it's positive, negative or zero
* Return: 0 if n is zero, 1 if n is greater than 0, -1 if n is less than 0
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
