#include "main.h"
/**
 * append_text_to_file - appends txt to a file
 * @filename: the name of the file
 * @text_content: the null terminated string
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int leo;
	int mbaruku;

	if (!filename)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (leo = 0; text_content[leo]; leo++)
			;
		mbaruku = write(fp, text_content, leo);
		if (mbaruku == -1)
		{
			return (-1);
		}
	}
	close(fp);
	return (1);
}
