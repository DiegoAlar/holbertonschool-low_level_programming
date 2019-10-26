#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_strings - print string arguments with separator in between
  * @separator: string separator between arguments
  * @n: number of arguments
  *
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
