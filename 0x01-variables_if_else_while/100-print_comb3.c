#include <stdio.h>
/**
*main - void
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int first;
	int second;
	int count;

	first = 48;
	second = 48;
	count = 2;
	while (first < 58)
	{
		while (second < 58)
		{
			putchar(first);
			putchar(second);
			if ((first != 56) && (count != 10))
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		second = 48 + count;
		first++;
		count++;
	}
	putchar('\n');
	return (0);
}
