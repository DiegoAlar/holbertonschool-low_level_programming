#include "function_pointers.h"
#include <stdlib.h>
/**
  * array_iterator - executes a function given as a parameter on each elements
  * @array: elements to perform a task given pointer func
  * @size: size given an object
  * @action: function pointer
  *
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (; i < size; i++)
	{
		action(array[i]);
	}
}
