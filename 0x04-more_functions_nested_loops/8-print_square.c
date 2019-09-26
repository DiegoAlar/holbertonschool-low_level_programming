#include "holberton.h"
/**
* print_square - prints a square, followed by a new line.
* @size: is the size of the square
*/
void print_square(int size)
{
	int n, i;

	n = size;
	if (size > 0)
	{
		for (; n > 0; n--)
		{
			for (i = size; i > 0; i--)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
