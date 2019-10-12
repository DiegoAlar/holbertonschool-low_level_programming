#include <stdio.h>
#include "holberton.h"
/**
* main - main program
* @argc: count of number of arguments
* @argv: an array containing the string of arguments
* Return: return 0 if succeded
*/
int main(int argc, char *argv[])
{
	int i;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

