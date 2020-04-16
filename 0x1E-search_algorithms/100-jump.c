#include "search_algos.h"
#include <math.h>
/**
 * jump_search - users this algorithm to search an int inside an array
 * @array: the array to make the search
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the value or -1 it is not in the array
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_step, flag = 0, prev = 0, subs = (int) floor(sqrt(size));
	char *mge = "Value found between indexes [%d] and [%d]\n";

	jump_step = floor(sqrt(size));
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, prev);
		if (array[jump_step] > value || jump_step >= (int) size)
		{
			flag = 1;
			break;
		}
		else
		{
			prev = jump_step;
			jump_step = jump_step + floor(sqrt(size));
		}
	}
	if (flag)
		printf(mge, prev, jump_step);
	else
	{
		printf(mge, prev - subs, jump_step - subs);
		prev -= floor(sqrt(size));
	}
	while (array[prev] <= value && prev < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, prev);

		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
