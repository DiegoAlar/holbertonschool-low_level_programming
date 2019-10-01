#include "holberton.h"
/**
* swap_int - swaps the values of two integers.
* @a: value to swap with b
* @b: value to swap with a
*
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
