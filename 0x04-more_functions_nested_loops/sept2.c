#include "holberton.h"
/**
  *
  *
  *
  */
void more_numbers(void)
{
	int x = 48;
	int y = 0;

	for (; y < 10; y++)
	{
		for (; x < 63; x++)
		{
			_putchar(x / 10);
		}
	}
	_putchar('\n');
}




