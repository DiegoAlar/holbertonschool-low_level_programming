#include "variadic_functions.h"
/**
  * sum_them_all - sums all the arguments entered
  * @n: number of arguments
  * Return: the result of the summ or 0 if n = 0
  *
  *
  */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int sum = 0, i = 0;
		va_list valist;

		va_start(valist, n);
		for (; i < n; i++)
			sum += va_arg(valist, unsigned int);
		va_end(valist);
		return (sum);
	}
	return (0);
}
