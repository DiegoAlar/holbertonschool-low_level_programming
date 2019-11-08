#include "holberton.h"
/**
  * get_bit - returns the value of a bit at a given index
  * @n: value input
  * @index: the index
  * Return: value in index position or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{

		if (n & (1 << index))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (-1);


}
