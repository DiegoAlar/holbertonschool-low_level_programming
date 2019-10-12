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
	int i = 1, sum = 0;
	if (argc > 0)
	{

	for (; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	printf("%d\n", sum);
	return (0);
}

