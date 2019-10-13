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
	int i = 1, sum = 0, k = 0;

	for (; i < argc; i++)
	{
		for (; argv[i][k] != '\0';  k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

