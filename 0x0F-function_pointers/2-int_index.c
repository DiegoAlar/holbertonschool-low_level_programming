#include "function_pointers.h"
/**
  * int_index - function that searches for an int
  * @array: array of integers
  * @size: size of the array
  * @cmp: function pointer
  * Return: an integer with index position
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		int c = cmp(array[i]);

		if (c)
			return (i);
	}
	return (-1);


}
