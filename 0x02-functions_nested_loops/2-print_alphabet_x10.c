#include "holberton.h"
/**
* print_alphabet_x10 - print the alphabet 10 times
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int letter, count;

	count = 0;
	letter = 97;
	for (; count < 10; count++)
	{
		for (; letter < 123; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		letter = 97;
	}
}
