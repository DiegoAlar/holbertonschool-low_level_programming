#include "holberton.h"
/**
  * read_textfile - reads a text file and prints it to the standard output
  * @filename: pointer to the file
  * @letters: number of letters it should read and print
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opn, rea, wrt, cls;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (-1);

	opn = open(filename, O_RDONLY);
	if (opn == -1)
		return (0);
	rea = read(opn, buf, letters);

	if (rea == -1)
		return (0);
	wrt = write(STDOUT_FILENO, buf, rea);

	if (wrt == -1)
		return (0);

	cls = close(opn);

	if (cls == -1)
		return (0);
	free(buf);
	return (rea);
}
