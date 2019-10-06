#include "holberton.h"
/**
* print_number - function that prints an integer
* @n: number to be printed
*/
void print_number(int n)
{
	int digit, countDigits = n, count = 0, div = n, i;

	if (n >= 0)
	{
		while (countDigits)
		{
			countDigits /= 10;
			count++;
		}
		for (digit = 1; digit < count; digit++)
		{
			div = n;
			for (i = 1; i <= (count - digit); i++)
			{
				div /= 10;
			}
			_putchar('0' + (div % 10));
		}
		_putchar('0' + (n % 10));
	}
	else
	{
		n *= -1;
		_putchar('-');
		print_number(n);
	}
}
