#include "search_algos.h"
/**
  * print_array - prints each element of an array
  * @array: array to be printed
  * @size: size of the array
  */
void print_array(int *array, int size)
{
	int count = 0;

	printf("Searching in array: ");
	while (count < (size - 1))
	{
		printf("%d, ", array[count]);
		count++;
	}
	printf("%d\n", array[count]);
}
/**
  * bin_search - searches for a value in a sorted array (Binary search)
  * @array: the array to make the search
  * @size: size of the array
  * @value: value to be searched
  * @idx: tracking of the index
  * Return: index to be returned
  */
int bin_search(int *array, int size, int value, int idx)
{
	int middle = (size - 1) / 2;
	int start = 0;

	if (array[middle] == value || size == 1)
	{
		print_array(array, size);
		if (array[middle] == value)
			return (idx + middle);
		else
			return (-1);
	}
	if (array[middle] > value)
	{
		print_array(array, size);
		return (bin_search(array,  middle, value, (start + idx)));
	}
	else
	{
		start = middle + 1;
		print_array(array, size);
		return (bin_search(&array[middle + 1], size / 2, value, (start + idx)));
	}

}

/**
  * binary_search - searches for a value in a sorted array (Binary search)
  * @array: the array to make the search
  * @size: size of the array
  * @value: the int to look at
  * Return: index where number was found or -1 it if wasn't
  */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (bin_search(array, (int) size, value, 0));
}
