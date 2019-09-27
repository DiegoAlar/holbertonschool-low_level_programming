#include "holberton.h"
#include <stdio.h>
/**
* main - principal function of a program
*
* Return: Always 0 - success
*/
int main(void)
{
	int long factor = 612852475143, num, mult, div, impar;

	num = factor;
	mult = 1;
	div = 2;
	while (mult != factor)
	{
		if ((num % div) == 0)
		{
			num = num / div;
			mult = mult * div;
		}
		else
		{
			impar = num;
			div++;
			if ((mult * div) == factor)
				break;
		}
	}
	printf("%li\n", impar);
	return (0);
}
