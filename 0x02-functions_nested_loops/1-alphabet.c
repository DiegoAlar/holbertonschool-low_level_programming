#include "holberton.h"
/**
* print_alphabet - doesn't take parameters - it print the alphabet
*
* Return Always 0 (Success)
*/
void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
