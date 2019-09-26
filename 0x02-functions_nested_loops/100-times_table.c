#include "holberton.h"
/**
* printChars - prints the 9 times table, starting with 0.
* @num: number to compare the count
* @count3: makes sure to putchar all other numbers except num
*/
void printChars(int num, int count3)
{
	if (count3 != num)
	{
		_putchar(',');
		_putchar(' ');
	}
}
/**
* print_times_table - prints the n times table
* @n: parameter to mult
*
*/
void print_times_table(int n)
{
	int multiplier = 0, number = 0, count1, count2;

	if (n >= 0 && n <= 15)
	{
		for (count1 = 0; count1 <= n; count1++)
		{	_putchar(number + '0');
			_putchar(',');
			_putchar(' ');
			for (count2 = 1; count2 <= n; count2++)
			{
				number = number + multiplier;
				if (number < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(number + '0');
					printChars(n, count2);
				}
				else if (number > 9 && number < 100)
				{
					_putchar(' ');
					_putchar((number / 10) + '0');
					_putchar((number % 10) + '0');
					printChars(n, count2);
				}
				else
				{
					_putchar(((number / 10) / 10) + '0');
					_putchar(((number % 100) / 10) + '0');
					_putchar((number % 10) + '0');
					printChars(n, count2);
				}
			}
			_putchar('\n');
			number = 0;
			multiplier++;
		}
	}
}
