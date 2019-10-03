#include "holberton.h"
/**
* reverse_array - this function reverrts an array
* @a: this is the array
* @n: the size of the array
*/

void reverse_array(int *a, int n)
{
	int i, k = 0, temp;

	i = n - 1;
	while (i >= n / 2)
	{
		temp = a[k];
		a[k] = a[i];
		a[i] = temp;

		i--;
		k++;
	}
}


