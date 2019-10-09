#include "holberton.h"
/**
* _pow_recursion - returns the value of x raised to the power of y
* @x: value to calculate power of...
* @y: value of power
* Return: and integer with value of raised power
*/
int _pow_recursion(int x, int y)
{
	int pow = y;

	if (y < 0)
	{
		return (-1);
	}
	if (pow == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (pow - 1)));
	}

}
