#include "holberton.h"
/**
* print_number - function that prints an integer
* @n: number to be printed
*/
void print_number(int n)
{
	unsigned int new = n;

	if (n < 0)
	{
		_putchar('-');
		new *= -1;
	}

	if ((new / 10) > 0)
	{
		print_number(new / 10);
	}
	_putchar((new % 10) + '0');
}
