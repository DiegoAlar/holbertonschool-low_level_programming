#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
  * struct tpes - structure tpes
  * @t: a format
  * @f: function
  */
typedef struct tpes
{
	char t;
	void (*f)(va_list);
} tp;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
