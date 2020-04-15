#include "search_algos.h"
/**
  * linear_search - searches for a value using the Linear search algorithm
  * @array: array of integers of which we need to fin one specific int
  * @size: size of the integers
  * @value: value to search in the array
  * Return: index of value is located
  */
int linear_search(int *array, size_t size, int value)
{
	int count = 0;

	if (!array)
		return (-1);
	while (count < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
		count++;
	}
	return (-1);

}
