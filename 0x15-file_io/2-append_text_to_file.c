#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: points to file name.
 * @text_content: String added to file end.
 * Return: Functuion fails or filename is NULL - -1.
 * if the file is nonexistant then
 * the user lacks write permissions - -1.
 * else - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, W;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	W = write(o, text_content, length);

	if (o == -1 || W == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
