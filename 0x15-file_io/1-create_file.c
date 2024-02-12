#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to write to file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int count;
	int read_and_write;

	if (!filename)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (count = 0; text_content[count]; count++)
		;
	read_and_write = write(fp, text_content, count);

	if (read_and_write == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
