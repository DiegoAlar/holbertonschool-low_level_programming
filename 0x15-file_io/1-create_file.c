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
	char *buff;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	len = strlen(text_content);
	buff = malloc(sizeof(char) * len);
	if (buff == NULL)
		return (-1);

	/*fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, */
	opn = open(filename, O_CREAT | O_TRUNC, 0600);
	if (opn == -1)
		return (-1);
	write(opn, buff, len);
	free(buff);
	close(opn);
	return (1);

}
