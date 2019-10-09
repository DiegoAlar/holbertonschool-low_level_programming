#include "holberton.h"


/**
* is_div - asks if a number is prime
* @n: number to evaluate if its prime
* @num: increment to evaluate mod
* Return: 1 for prime 0 for composite
*/
int is_div(int n, int num)
{
	if (n > 2)
	{
		if (n == num)
			return (1);
		else if (n % num == 0 || num == n)
			return (0);
		else
			return (is_div(n, (num + 1)));
	}
	else
	{
		return (0);
	}
}

/**
* is_prime_number - calls a function to evaluate if n is prime
* @n: number to evaluate if its pirme or not
* Return: 1 for prime 0 for composite
*/
int is_prime_number(int n)
{
	return (is_div(n, 2));
}
