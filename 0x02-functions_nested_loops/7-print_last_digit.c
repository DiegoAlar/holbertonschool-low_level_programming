#include "holberton.h"
/**
* print_last_digit - prints last digit of a number
* @n: number which we are going to print its last number
* Return: ALways 0 (Sucess)
*/
int print_last_digit(int n)
{
	int arg;

	if (n < 0)
	{
		n = n * -1;
	}
	arg = n % 10;
	_putchar('0' + arg);
	return (arg);
}
