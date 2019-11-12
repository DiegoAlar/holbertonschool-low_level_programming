#include "holberton.h"
#include <string.h>
/**
  * append_text_to_file - appends text at the end of a file
  * @filename: name of the file
  * @text_content: the content to append
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int len, opn;

	if (filename == NULL)
		return (-1);
	opn = open(filename, O_WRONLY | O_APPEND);
	if (opn == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(opn, text_content, len);
	}
	close(opn);
	return (1);
}
