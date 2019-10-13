#include <stdio.h>
#include <stdlib.h>
/**
* main - main program
* @argc: count of number of arguments
* @argv: an array containing the string of arguments
* Return: return 0 if succeded
*/
int main(int argc, char *argv[])
{
	int num, size, i, acum = 0;
	int coins[] = {25, 10, 5, 2, 1};

	size = sizeof(coins) / sizeof(coins[0]);

	if (argc == 2)
	{
		if (argv[1][0] != '-')
		{
			num = atoi(argv[1]);
			for (i = 0; i < size; i++)
			{
				if (num / coins[i] > 0)
				{
					acum = acum + (num / coins[i]);
					num %= coins[i];
				}
			}
			printf("%d\n", acum);
			return (0);

		}
		else
		{
			printf("0\n");
			return (0); /* */
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

