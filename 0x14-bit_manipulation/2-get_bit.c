#include "holberton.h"
/**
  * get_bit - returns the value of a bit at a given index
  * @n: value input
  * @index: the index
  * Return: value in index position or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = 0, i = 0;

	num = n >> index;
	while (n)
	{
		n = n / 2;
		i++;
	}

	if (index > i)
		return (-1);
	if (num & 1)
		return (1);
	else
		return (0);
}
