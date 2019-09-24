#include "holberton.h"
/**
* print_last_digit - prints last digit of a number
* @n: number which we are going to print its last number
* Return: ALways 0 (Sucess)
*/
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n);
}
