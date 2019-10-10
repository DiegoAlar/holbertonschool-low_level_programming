#include "holberton.h"


/**
* comp - function to return final result
* @num: argument to determine if pal or not pal
* Return: 1 if its pal or 0 if not
*/
int comp(int num)
{
	if (num > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* findSize - finds out the size of a string
* @s: string to find size
* Return: the size of the string
*/
int findSize(char *s)
{
	int count = 1;

	if (*s)
	{
		s++;
		return (count + findSize(s));
	}
	return (0);

}

/**
* isPal - it will add 1 or -1 to analize if pal
* @s: string argument
* @size: position to see string element (right to left)
* @init: potition to see string element (left to right)
* @limit: value to stop the evaluation
* Return: a sum of elements to evaluate if pal
*/
int isPal(char *s, int size, int init, int limit)
{
	if (init != limit)
	{
		if (s[init] == s[size - 1] || s[init] == 32 || s[size - 1] == 32)
		{
			return (1 + isPal(s, (size - 1), (init + 1), limit));

		}
		return (-1 + isPal(s, (size - 1), (init + 1), limit));
	}
	else
	{
		return (0);

	}
}

/**
* is_palindrome - this funtion will finally tell if a s is pal
* @s: string argument to evaluate if its pal
* Return: 1 if pal or 0 if not
*/
int is_palindrome(char *s)
{
	int size, init = 0, limit, res;

	size = findSize(s);
	limit = size / 2;
	if (size == 0)
	{
		return (0);
	}
	else
	{
		res = (isPal(s, size, init, limit));
		return (comp(res));
	}

}
