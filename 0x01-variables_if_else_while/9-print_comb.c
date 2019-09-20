#include <stdio.h>
/**
*main - void
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	num = 48;
	do {
		putchar(num);
		num++;
		if (num < 58)
		{
			putchar(',');
			putchar(' ');
		}
	} while (num < 58);
	putchar('\n');

	return (0);
}
