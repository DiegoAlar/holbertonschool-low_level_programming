#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
  * main - initial function
  * @argc: number of parameters
  * @argv: array of parameters entered
  * Return: always 0 when succeded
  *
  */
int main(int argc, char **argv)
{
	char *p;
	int num1, num2;
	int (*res)(int, int);

	p = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(p);
	if (res != NULL)
	{
		printf("%d\n", res(num1, num2));
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
