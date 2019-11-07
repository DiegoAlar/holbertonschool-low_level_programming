#include "holberton.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: the number to convert
  * Return: converted number or 0
  *
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, k = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			num += 1 << k;
		}
		i--;
		k++;
	}
	return (num);

}
