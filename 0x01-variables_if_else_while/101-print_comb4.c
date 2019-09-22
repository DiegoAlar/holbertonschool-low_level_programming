#include<stdio.h>
/**
*main - void
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int first, second, third, add, add3;

	first = 50;
	second = 49;
	add = 0;
	add3 = 0;

	for (third = 48; third < 56; third++)
	{
		for (; second < 57; second++)
		{
			for (; first < 58 ; first++)
			{
				putchar(third);
				putchar(second);
				putchar(first);
				if (third != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
			add++;
			first = 50 + add + add3;
		}
		add3++;
		first = 50 + add3;
		second = 49 + add3;
		add = 0;	
	}
	putchar('\n');
	return (0);
}
