#include "holberton.h"
/**
* _print_rev_recursion -  prints a string in reverse
* @s: string to be reversed
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
	else
	{
		return;
	}
}
