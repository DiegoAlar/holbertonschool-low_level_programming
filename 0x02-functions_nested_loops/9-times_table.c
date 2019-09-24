#include "holberton.h"
/**
* times_table - prints the 9 times table, starting with 0.
*
* 
*/
void times_table(void)
{
	int multiplier, count1, count2, number;
	
	multiplier = 0;
	number = 0;
	for (count1 = 0; count1 <  10; count1++)
	{
		_putchar(number + '0');
		_putchar(',');
		_putchar(' ');
		for (count2 = 1; count2 < 10; count2++)
		{
			number = number + multiplier;
			if (number < 10)
			{
				if (count2 != 9)
				{
					_putchar(' ');
					_putchar(number + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
					_putchar(number + '0');
				}
			}
			else
			{
				int div, mod;
				
				div = number / 10;
				mod = number % 10;
				_putchar(div + '0');
				_putchar(mod + '0');
				if (count2 != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		number = 0;
		multiplier++;
		count2 = 1;
	}
}
