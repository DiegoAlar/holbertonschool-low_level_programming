#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - sums diagonals
* @a: bidimentional array
* @size: size of the array
*/
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, count = 0, matrix = size * size;

	while (count < matrix)
	{
		d1 += a[count];
		count = count + size + 1;
	}
	count = matrix - 1;
	while (count < (matrix - 1))
	{
		d2 += a[count];
		count = count + size - 1;
	}
	printf("%d, %d\n", d1, d2);
}
