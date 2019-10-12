#include <stdio.h>
#include "holberton.h"
/**
* main - main program
* @argc: count of number of arguments
* @argv: an array containing the string of arguments
* Return: return 0 if succeded
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);
	return (0);
}

