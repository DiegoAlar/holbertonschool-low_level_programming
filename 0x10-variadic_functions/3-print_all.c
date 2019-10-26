#include "variadic_functions.h"
/**
  * printChar - prints a char
  * @va: list with the arguments
  *
  *
  */
void printChar(va_list va)
{

	printf("%c", (char) va_arg(va, int));
}
/**
  * printInt - prints an integer
  * @va: list with arguments
  *
  *
  */
void printInt(va_list va)
{
	printf("%d", va_arg(va, int));
}
/**
  * printString - prints a string
  * @va: list with arguments
  *
  *
  */
void printString(va_list va)
{
	char *st = va_arg(va, char*);

	if (st == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", st);
}
/**
  * printFloat - prints a float number
  * @va: list with arguments
  *
  *
  */
void printFloat(va_list va)
{
	printf("%f", (float) va_arg(va, double));
}

/**
  * print_all - prints all kind of types
  * @format: string with types to be printed
  *
  *
  */
void print_all(const char * const format, ...)
{
	int i = 0, q = 0, f = 0;
	va_list valist;

	tp allTypes[] = {
		{'c', printChar},
		{'i', printInt},
		{'s', printString},
		{'f', printFloat},
	};
	va_start(valist, format);
	while (format && format[i])
	{
		switch (f)
		{
			case 1:
				printf(", ");
				break;
		}
		f = 0;
		while (q < 4)
		{
			if (allTypes[q].t == format[i])
			{
				f = 1;
				allTypes[q].f(valist);
			}
			q++;
		}
		q = 0;
		i++;
	}
	va_end(valist);
	printf("\n");
}
