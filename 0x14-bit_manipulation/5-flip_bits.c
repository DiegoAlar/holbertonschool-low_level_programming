#include "holberton.h"
/**
  * flip_bits - sets the value of a bit to 0 at a given index
  * @n: number 1
  * @m: number 2
  * Return: number of bits to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0, bits = 0;

	num = (m ^ n);

	while (num)
	{
		if (num & 1)
			bits++;
		num >>= 1;

	}
	return (bits);



}
