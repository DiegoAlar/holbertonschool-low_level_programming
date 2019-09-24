#include "holberton.h"
/**
* jack_bauer - prints hours and minutes of the whole day
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	int first, second, third, fourth, hoursLimiter;

	first = 0;
	second = 0;
	third = 0;
	fourth = 0;
	hoursLimiter = 10;

	for (; first < 3; first++)
	{
		if (first == 2)
		{
			hoursLimiter = 4;
		}
		for (; second < hoursLimiter; second++)
		{
			for (; third < 6; third++)
			{
				for (; fourth < 10; fourth++)
				{
					_putchar(first + '0');
					_putchar(second + '0');
					_putchar(58);
					_putchar(third + '0');
					_putchar(fourth + '0');
					_putchar('\n');
				}
				fourth = 0;
			}
			third = 0;
		}
		second = 0;
		hoursLimiter = 10;
	}
}
