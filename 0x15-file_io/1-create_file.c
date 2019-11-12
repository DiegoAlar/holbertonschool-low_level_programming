#include "holberton.h"
#include <string.h>
/**
  * create_file - function that creates a file
  * @filename: name of the file to create
  * @text_content: is a NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int opn, len;

	if (filename == NULL)
		return (-1);
	len = strlen(text_content);
	opn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, (S_IRWXU | S_IRUSR));
	if (opn == -1)
		return (-1);

	if (text_content != NULL)
		write(opn, text_content, len);
	close(opn);
	return (1);

}
