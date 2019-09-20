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

	first = 48;
	second = 48;
	while (first < 58)
	{
		while (second < 58)
		{
			putchar(first);
			putchar(second);
			if ((first == 57) && (second == 57))
			{
				putchar('\n');
				break;
			}
			putchar(',');
			putchar(' ');
			second++;
		}
		second = 48;
		first++;
	}
	return (0);
}
