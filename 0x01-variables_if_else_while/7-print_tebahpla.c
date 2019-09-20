#include <stdio.h>
/**
*main - void
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int lower;

	lower = 122;
	while (lower != 96)
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
