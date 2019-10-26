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
	printf("%s", va_arg(va, char*));
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
	int i = 0, k = 0, q = 0;
	va_list valist;


	tp allTypes[] = {
		{'c', printChar},
		{'i', printInt},
		{'s', printString},
		{'f', printFloat},
	};

	k = strlen(format);
	va_start(valist, format);

	while (i < k)
	{
		while (q < 4)
		{
			if (allTypes[q].t == format[i])
			{
				allTypes[q].f(valist);
				switch (i)
				{
					case (k - 1):
						break;
					default:
						printf(", ");
						break;
				}
				/*if (i < (k - 1))
					printf(", ");*/
				break;
			}
			q++;
		}
		q = 0;
		i++;
	}
	printf("\n");
}
