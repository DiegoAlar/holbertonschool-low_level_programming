#include <stdio.h>
/**
*main - void
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int allNums;
	int allLetters;

	allNums = 48;
	allLetters = 97;
	while (allNums < 58)
	{
		putchar(allNums);
		allNums++;
	}
	while (allLetters < 103)
	{
		putchar(allLetters);
		allLetters++;
	}
	putchar('\n');

	return (0);
}
