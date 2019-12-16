#include "holberton.h"
/**
* _atoi - converts a number inside a string to int
* @s: string input
* Return: returns the number as integer
*/
int _atoi(char *s)
{//b = i; c = k; f = q; unsigned int z = e
	int i, k, sign, q;
	unsigned int z;

	i = 0;
	sign = 1;
	z = 0;
	q = 0;

	while (s[i])
	{
		k = s[i];
		if (k == 45)
		{
			sign = sign * (-1);
		}
		if (k >= 48 && k <= 57)
		{
			k = s[i] - 48;
			if (z == 0)
			{
				z = k;
			}
			else
			{
				z = (z * 10) + k;
				++q;
			}
		}
		else if (q > 0)
		{
			break;
		}
		++i;
	}
	z = z * sign;
	return (z);
}

