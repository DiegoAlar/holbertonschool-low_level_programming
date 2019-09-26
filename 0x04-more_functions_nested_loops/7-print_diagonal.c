#include "holberton.h"
/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n:  is the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int k, inc = 0;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
		{
			for (; inc < k; inc++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			inc = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
