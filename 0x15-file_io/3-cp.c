#include "holberton.h"
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
int cpy_fle(const char *file_from, const char *file_to);
/**
  * main - copies the content of a file to another file
  * @argc: number of elements
  * @argv: array with argc elements
  * Return: 0 when succeded
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cpy_fle(argv[1], argv[2]);
	return (0);
}
/**
  * cpy_fle - copies the content of a file to another file
  * @file_from: the origin file
  * @file_to: destiny file
  * Return: 0 if succedded
  */
int cpy_fle(const char *file_from, const char *file_to)
{
	int ifd, ofd, oFlags, nRead;
	char buff[BUF_SIZE];

	ifd = open(file_from, O_RDONLY);
	if (ifd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	oFlags = O_CREAT | O_WRONLY | O_TRUNC;
	ofd = open(file_to, oFlags, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |
			S_IROTH);
	if (ofd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((nRead = read(ifd, buff, BUF_SIZE)) > 0)
	{
		if (write(ofd, buff, nRead) != nRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (nRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(ifd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ifd);
		exit(100);
	}
	if (close(ofd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ofd);
		exit(100);
	}
	return (0);
}
