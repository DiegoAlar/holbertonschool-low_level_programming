#include "holberton.h"
/**
* _islower - it checks either a letter is written in upper or lower case
* @c::  parameter that we need to evaluate if it's uppercase
*
* Return: 1 if c is lowercase or 0 if it's uppercase
*/
int _islower(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (0);
	}
	else 
	{
		return (1);
	}
	

}

