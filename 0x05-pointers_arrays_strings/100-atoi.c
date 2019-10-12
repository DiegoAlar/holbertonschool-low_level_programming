#include "holberton.h"

/**
  * positionOfNumber - returns position of first number
  * @largeString
  * Return: coverts string number to int
  */
int positionOfNumber(char *largeString)
{
	int i = 0, k = 0;

	while (largeString[i] != 0)
	{
		if (largeString[i] > 47 && largeString[i] < 58)
		{
			k = i;
			break;
		}
		i++;
	}
	return k;
}

/**
  * findingSize - looks for a size of a number pattern in a string
  * @largeString: string to evaluate
  * Return: returns a size containing only numbers
  */
int findingSize(char *largeString)
{
	int i = positionOfNumber(largeString), count = 0;
	int sw = 1;

	while (sw == 1)
	{
		if (largeString[i] > 47 && largeString[i] < 58)
		{
			count++;
		}
		else
		{
			sw = 0;
		}
		i++;
	}
	return count;
}

/**
* _atoi - converts a number inside a string to int
* @s: string input
* Return: returns the number as integer
*/
int _atoi(char *s)
{
	int sizeOfNumbers, initialPosition, res = 0, mult = 1, setLimit;

	initialPosition = positionOfNumber(s);
	sizeOfNumbers = findingSize(s);
	setLimit = initialPosition + sizeOfNumbers;

	while (setLimit >= initialPosition)
	{
		int valor;

		valor = s[setLimit] - 48;
		res = (valor * mult) + res;
		mult = mult * 10;
		setLimit--;
	}
	return res;
}
